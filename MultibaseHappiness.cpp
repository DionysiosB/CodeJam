#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include <set>


long sumOfSquares(std::vector<int> number){
    long output(0);
    for(int p = 0; p < number.size(); p++){output += number[p] * number[p];}
    return output;
}

std::vector<int> convertToBase(long input, int base){
    std::vector<int> output;
    while(input > 0){
        output.push_back(input % base);
        input /= base;
    }

    return output;
}

bool isHappy(int number, int base){

    std::set<long> history;
    while(true){
        long ss = sumOfSquares(convertToBase(number, base));
        if(ss <= 1){return true;}
        else if(history.find(ss) != history.end()){return false;}
        else{history.insert(number);  number = ss;}
    }

    return false;
}




int main(){

    int T; scanf("%d\n", &T);

    for(int p = 1; p <= T; p++){

        std::string baseLine; getline(std::cin, baseLine);
        std::istringstream is( baseLine );
        std::vector<int> baseVec = std::vector<int>(std::istream_iterator<int>(is), std::istream_iterator<int>());

        int result = 2;
        while(true){
            bool done = 1;
            for(int b = 0; b < baseVec.size(); b++){
                int currentBase = baseVec[b];
                if(!isHappy(result, currentBase)){done = 0; break;}
            }

            if(done){break;} else{++result;}
        }

        std::cout << "Case #" << p << ": " << result << std::endl;
    }

    return 0;
}
