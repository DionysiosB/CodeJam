#include <iostream>

int main(){

    const int BYTE = 8;

    int T; std::cin >> T;
    for(int a = 1; a <= T; a++){
        int B; std::cin >> B;
        std::string s; std::cin >> s;
        std::string ret("");
        int binary(0);
        for(int p = 1; p <= s.size(); p++){
            binary = 2 * binary + (s[p - 1] == 'I');
            if(p % BYTE == 0){ret += char(binary); binary = 0;}
        }

        std::cout << "Case #" << a << ": " << ret << std::endl;
    }

    return 0;
}
