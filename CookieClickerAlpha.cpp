#include <iostream>

int main(){

    int T; std::cin >> T;
    for(int a = 1; a <= T; a++){

        const double base = 2.0;
        double c, f, x; std::cin >> c >> f >> x;

        double res = x / base;
        double farmTime = 0;
        for(int n = 0; n <= x; n++){ //Can do it analytically, but not worth it
            double candidate = farmTime + x / (base + n * f);
            farmTime += c / (base + n * f);
            if(candidate < res){res = candidate;}
        }

        std::cout.precision(10);
        std::cout << "Case #" << a << ": " << res << std::endl;

    }

    return 0;
}
