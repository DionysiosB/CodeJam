#include <cstdio>
#include <iostream>
#include <string>


long convertToDecimal(std::string number, std::string alphabet){
    
    long base = alphabet.size();
    long output = 0;
    for(int p = 0; p < number.size(); p++){
        output = base * output + alphabet.find(number[p]);
    }

    return output;
}

std::string convertFromDecimal(long number, std::string alphabet){
    
    long base = alphabet.size();
    std::string output = "";
    if(number == 0){return std::string(1, alphabet[0]);}
    while(number > 0){
        output = alphabet[number % base] + output;
        number /= base;
    }

    return output;
}



int main(){

    size_t N; std::cin >> N;

    for(int p = 1; p <= N; p++){
        std::string number, source, target;
        std::cin >> number >> source >> target;
        std::cout << "Case #" << p << ": " << convertFromDecimal(convertToDecimal(number, source), target) << std::endl;
    }

    return 0;
}
