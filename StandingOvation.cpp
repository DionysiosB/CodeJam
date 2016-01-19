#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    int T; std::cin >> T;
    for(int a = 1; a <= T; a++){


        int S; std::string counts;
        std::cin >> S >> counts;
        int total(0), current(0);
        for(int p = 0; p < counts.size(); p++){
            int count = counts[p] - '0';
            if(count <= 0){continue;}
            int needed = (current < p) ? (p - current) : 0;
            total += needed;
            current += needed + count;
        }

        std::cout << "Case #" << a << ": " << total << std::endl;

    }

    return 0;
}
