#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    for(int c = 1; c <= t; c++){
        std::string s; std::cin >> s;
        std::string res(""); res += s[0];
        for(size_t p = 1; p < s.size(); p++){
            if(s[p] < res[0]){res = res + s[p];}
            else{res = s[p] + res;}
        }

        std::cout << "Case #" << c << ": " << res << std::endl;
    }

    return 0;
}
