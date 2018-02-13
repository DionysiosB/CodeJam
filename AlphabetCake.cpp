#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int t; scanf("%d\n", &t);
    for(long tc = 1; tc <= t; tc++){
        long R, C; scanf("%ld %ld\n", &R, &C);
        std::vector<std::string> cake(R);
        for(long p = 0; p < R; p++){getline(std::cin, cake[p]);}

        for(long row = 0; row < R; row++){
            char c('?');
            for(long col = 0; col < C; col++){
                if(c == '?' && cake[row][col] != '?'){c = cake[row][col];}
                if(col > 0 && cake[row][col] == '?'){cake[row][col] = cake[row][col - 1];}
            }

            for(long col = 0; col < C; col++){
                if(c == '?' || cake[row][col] != '?'){break;}
                cake[row][col] = c;
            }
        }

        for(long row = 1; row < R; row++){if(cake[row][0] == '?'){cake[row] = cake[row - 1];}}
        for(long row = R - 2; row >= 0; row--){if(cake[row][0] == '?'){cake[row] = cake[row + 1];}}

        std::cout << "Case #" << tc << ":" << std::endl;
        for(long p = 0; p < R; p++){std::cout << cake[p] << std::endl;}
    }

    return 0;
}
