#include <cstdio>
#include <iostream>

int main(){

    int n(0); scanf("%d\n", &n);
    for(int currentCase = 1; currentCase <= n; currentCase++){
        std::string line; getline(std::cin, line);
        
        std::string output("");
        std::cout << "Case #" << currentCase << ": ";
        for(int k = line.size() - 1; k >= 0; k--){
            if(line[k] != ' '){output = line[k] + output;}
            else{std::cout << output << " "; output = "";}
        }
        if(output.size() > 0){std::cout << output;}
        std::cout << std::endl;
    }
    return 0;
}
