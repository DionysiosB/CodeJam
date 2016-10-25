#include <iostream>

int main(){

    const int64_t MOD = 1000000007;
    int t; std::cin >> t;
    for(int c = 1; c <= t; c++){
        std::string s; std::cin >> s;
        int64_t res(1);
        for(int p = 0; p < s.size(); p++){
            int ways = 1 + ((p > 0) && (s[p - 1] != s[p])) + ((p + 1 < s.size()) && (s[p + 1] != s[p]) && (s[p + 1] != s[p - 1]));
            res *= ways;
            res %= MOD;
        }

        std::cout << "Case #" << c << ": " << res << std::endl;
    }

    return 0;
}
