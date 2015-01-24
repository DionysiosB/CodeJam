#include <cstdio>
#include <iostream>
#include <cmath>

int main(){

    int N; scanf("%d", &N);
    
    for(int p = 1; p <= N; p++){

        std::string output = "triangle";

        long x1, y1, x2, y2, x3, y3; 
        scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &x2, &y2, &x3, &y3);

        long sqlenA = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        long sqlenB = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
        long sqlenC = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
        double eps = 1e-8;

        if(sqrt(sqlenA) + eps >= sqrt(sqlenB) + sqrt(sqlenC) || sqrt(sqlenB) + eps >= sqrt(sqlenA) + sqrt(sqlenC) || sqrt(sqlenC) + eps >= sqrt(sqlenA) + sqrt(sqlenB)){output = "not a triangle";}
        else{

            if(sqlenA > sqlenB + sqlenC || sqlenB > sqlenA + sqlenC || sqlenC > sqlenA + sqlenB){output = "obtuse " + output;}
            else if(sqlenA == sqlenB + sqlenC || sqlenB == sqlenA + sqlenC || sqlenC == sqlenA + sqlenB){output = "right " + output;}
            else{output = "acute " + output;}

            if(sqlenA == sqlenB || sqlenA == sqlenC || sqlenB == sqlenC){output = "isosceles " + output;}
            else{output = "scalene " + output;}
        }

        std::cout << "Case #" << p << ": " << output << std::endl;

    }



    return 0;
}
