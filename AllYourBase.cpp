#include <cstdio>
#include <iostream>
#include <set>
#include <map>

int main(){

    int T(0); scanf("%d\n", &T);

    for(int currentCase = 1; currentCase <= T; currentCase++){

        std::string input; getline(std::cin, input);
        std::set<char> symbols; 
        for(int k = 0; k < input.size(); k++){symbols.insert(input[k]);}

        int base = symbols.size();
        if(base == 1){base = 2;}

        std::map<char,int> dict;
        for(std::set<char>::iterator iter = symbols.begin(); iter != symbols.end(); iter++){dict.insert(std::pair<char,int>(*iter,-1));}

        dict[input[0]] = 1;

        for(int k = 1; k < input.size(); k++){if(input[k] != input[0]){dict[input[k]] = 0; break;}}
        int nextNumber(2); 
        for(int k = 0; k < input.size(); k++){if(dict[input[k]] < 0){dict[input[k]] = nextNumber++;}}

        long long power(1), total(0);
        for(int k = input.size() - 1; k >= 0; k--){total += power * dict[input[k]]; power *= base;}

        printf("Case #%d: %lld\n", currentCase, total);
    }

    return 0;
}
