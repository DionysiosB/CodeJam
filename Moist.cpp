#include <cstdio>
#include <iostream>

int main(){

    int T; scanf("%d\n", &T);
    for(int s = 1; s <= T; s++){

        int n; scanf("%d\n", &n);
        std::string prev; getline(std::cin, prev);

        int count(0);
        for(int p = 1; p < n; p++){
            std::string card; getline(std::cin, card);
            if(card < prev){++count;}
            else{prev = card;}
        }

        std::cout << "Case #" << s << ": " << count << std::endl; 
    }

    return 0;
}
