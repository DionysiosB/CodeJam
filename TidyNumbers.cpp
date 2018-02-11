#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int T; std::cin >> T;
    for(int tc = 1; tc <= T; tc++){
        std::cout << "Case #" << tc << ": ";
        std::string s; std::cin >> s;
        long lastChange = s.size() + 1;
        for(long p = s.size() - 1; p > 0; p--){if(s[p - 1] > s[p]){s[p] = '9'; --s[p - 1]; lastChange = p;}}

        bool started(false);

        for(long p = 0; p < s.size(); p++){
            if(!started && s[p] == '0'){continue;}
            if(s[p] > '0'){started = true;}
            if(p >= lastChange){s[p] = '9';}
            std::cout << s[p];
        }
        std::cout << std::endl;
    }

    return 0;
}
