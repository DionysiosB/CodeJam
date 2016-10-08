#include <iostream>
#include <vector>

int main(){

    const int D = 10; const int L = 26;
    std::vector<std::string> digits(D);
    digits[0] = "ZERO"; digits[1] = "ONE"; digits[2] = "TWO"; digits[3] = "THREE";
    digits[4] = "FOUR"; digits[5] = "FIVE"; digits[6] = "SIX"; digits[7] = "SEVEN";
    digits[8] = "EIGHT"; digits[9] = "NINE";

    std::vector<int> order(D);
    order[0] = 0; order[1] = 2; order[2] = 4; order[3] = 6; order[4] = 8;
    order[5] = 1; order[6] = 3; order[7] = 5; order[8] = 7; order[9] = 9;

    std::vector<char> leading(D);
    leading[0] = 'Z'; leading[1] = 'W'; leading[2] = 'U'; leading[3] = 'X'; leading[4] = 'G';
    leading[5] = 'O'; leading[6] = 'T'; leading[7] = 'F'; leading[8] = 'V'; leading[9] = 'I';

    int t; std::cin >> t;
    for(int c = 1; c <= t; c++){

        std::string s; std::cin >> s;
        std::vector<int> count(L, 0);
        std::vector<int> res(D, 0);
        for(int p = 0; p < s.size(); p++){++count[s[p] - 'A'];}

        for(int p = 0; p < D; p++){
            int current = order[p];
            int letter = leading[p] - 'A';
            int rep = count[letter];
            res[current] = rep;
            for(int q = 0; q < digits[current].size(); q++){count[digits[current][q] - 'A'] -= rep;}
        }

        std::string number("");
        for(int p = 0; p < D; p++){for(int q = 0; q < res[p]; q++){number += ('0' + p);}}

        std::cout << "Case #" << c << ": " << number << std::endl;
    }

    return 0;
}
