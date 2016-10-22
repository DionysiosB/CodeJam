#include <cstdio>
#include <map>
#include <vector>

int main(){

    int t; scanf("%d\n", &t);
    for(int c = 1; c <= t; c++){
        long n; scanf("%ld\n", &n);
        std::map<long, long> prices;
        for(long p = 0; p < 2 * n; p++){
            long x; scanf("%ld", &x);
            if(prices.count(x) == 0){prices[x] = 0;}
            ++prices[x];
        }

        std::vector<long> res;
        while(prices.size() > 0){
            long discPrice = prices.begin() -> first;
            long rep = prices.begin() -> second;
            prices.erase(discPrice);
            if(rep <= 0){continue;}
            for(long k = 0; k < rep; k++){res.push_back(discPrice);}
            long regPrice = 4 * discPrice / 3;
            prices[regPrice] -= rep;
        }

        printf("Case #%d: ", c);
        for(long p = 0; p < res.size(); p++){printf("%ld ", res[p]);}
        puts("");
    }

    return 0;
}
