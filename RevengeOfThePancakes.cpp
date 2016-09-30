#include <iostream>

int main(){

    int T; std::cin >> T;
    for(int c = 1; c <= T; c++){
        std::string s; std::cin >> s;
        size_t count(s[s.size() - 1] == '-');
        for(size_t p = 1; p < s.size(); p++){count += (s[p - 1] != s[p]);}
        std::cout << "Case #" << c << ": " << count << std::endl;
    }

    return 0;
}
