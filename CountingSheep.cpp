#include <iostream>
#include <set>

int main(){

    const int UPPER = 100;
    const int NUM_DIGITS = 10;
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    for(int c = 1; c <= t; c++){

        long N; std::cin >> N;
        long res(-1);
        if(N > 0){
            std::set<int> digits;
            for(int p = 1; p < UPPER; p++){
                long current = p * N;
                res = current;
                while(current > 0){digits.insert(current % 10); current /= 10;}
                if(digits.size() >= NUM_DIGITS){break;}
            }
        }

        std::cout << "Case #" << c << ": ";
        if(res < 0){std::cout << "INSOMNIA" << std::endl;}
        else{std::cout << res << std::endl;}
    }

    return 0;
}
