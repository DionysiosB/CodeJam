#include <cstdio>
#include <iostream>
#include <string>
#include <vector>


int main(){

    int L, D, N; scanf("%d %d %d\n", &L, &D, &N);

    std::vector<std::string> words(D);
    for(int p = 0; p < D; p++){getline(std::cin, words[p]);}

    for(int p = 1; p <= N; p++){
        std::string received; getline(std::cin, received);
        std::vector<std::string> letters(L, "");

        int count = 0;
        bool multiple = 0;
        for(int d = 0; d < received.size(); d++){
            if(received[d] == '('){multiple = 1;}
            else if('a' <= received[d] && received[d] <= 'z'){
                letters[count] += received[d];
                if(!multiple){++count;}
            }
            else if(received[d] == ')'){multiple = 0; ++count;}
        }

        long total = 0;
        for(int w = 0; w < D; w++){
            std::string currentWord = words[w];
            bool found = 1;
            for(int l = 0; l < L; l++){if(letters[l].find(currentWord[l]) == std::string::npos){found = 0; break;}}
            total += found;
        }

        std::cout << "Case #" << p << ": " << total << std::endl;
    }

    return 0;
}
