#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int T; std::cin >> T;
    for(long tc = 1; tc <= T; tc++){
        std::string s; std::cin >> s;
        int k; std::cin >> k;

        long flips(0);
        for(long p = 0; p + k - 1 < s.size(); p++){
            if(s[p] == '-'){
                ++flips;
                for(long q = 0; q < k; q++){
                    if(s[p + q] == '-'){s[p + q] = '+';}
                    else if(s[p + q] == '+'){s[p + q] = '-';}
                }
            }
        }

        bool possible(true);
        for(long p = s.size() - k + 1; p < s.size(); p++){if(s[p] == '-'){possible = false; break;}}

        std::cout << "Case #" << tc << ": ";
        if(possible){std::cout << flips << std::endl;}
        else{std::cout << "IMPOSSIBLE" << std::endl;}
    }


    return 0;
}
