#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <set>


int main(){

    int N; scanf("%d\n", &N);

    for(int p = 1; p <= N; p++){
        int S; scanf("%d\n", &S);
        std::set<std::string> engineSet;
        for(int s = 0; s < S; s++){
            std::string current; 
            getline(std::cin, current);
            engineSet.insert(current);
        }

        int Q; scanf("%d\n", &Q);
        std::set<std::string> remaining(engineSet);

        int total(0);
        for(int q = 0; q < Q; q++){
            std::string query; getline(std::cin, query);
            if(remaining.find(query) == remaining.end()){continue;}
            else{
                remaining.erase(query);
                if(remaining.empty()){
                    ++total;
                    remaining = engineSet;
                    remaining.erase(query);
                }
            }
        }

        std::cout << "Case #" << p << ": " << total << std::endl;

    }

    return 0;
}
