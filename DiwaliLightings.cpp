#include <iostream>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    for(int tc = 1; tc <= t; tc++){
        std::string s; std::cin >> s;
        int64_t a, b; std::cin >> a >> b;
        --a; --b;
        int64_t k = s.size();
        int64_t total(0);
        for(long p = 0; p < k; p++){
            if(s[p] != 'B'){continue;}
            int64_t s = k * (a / k) + p;
            int64_t f = k * (b / k) + p; if(f > b){f -= k;}
            if(f < s){continue;}
            total += 1 + (f - s) / k;
        }

        std::cout << "Case #" << tc << ": " << total << std::endl;
    }

    return 0;
}
