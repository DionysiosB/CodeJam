#include <iostream>
#include <vector>
#include <cmath>

int main(){

    const int L = 9000;
    const double eps = 1e-6;
        
    std::vector<double> logs(L + 1, 0);
    for(int p = 1; p <= L; p++){logs[p] = log10(p);}

    std::vector<long> digits(L + 1, 0);
    for(int step = 1; step < L; step++){
        double factLog = 0;
        for(int x = L; x > 0; x -= step){factLog += logs[x];}
        digits[step] = ceil(factLog);
        if(ceil(factLog) - factLog < eps){++digits[step];}
    }

    int T; std::cin >> T;
    for(int a = 1; a <= T; a++){

        long D; std::cin >> D;
        if(D <= 4){std::cout << "Case #" << a << ": ..." << std::endl; continue;}

        int numMarks(1);
        std::string ret = "IT'S OVER 9000!";
        while(digits[numMarks] >= D){++numMarks; ret += "!";}

        std::cout << "Case #" << a << ": " << ret << std::endl;
    }

    return 0;
}
