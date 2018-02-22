#include <cstdio>
#include <iostream>

bool check(uint64_t x, uint64_t b){
    while(x > 0){if(x % b != 1){return false;}; x /= b;}
    return true;
}

int main(){

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        int64_t n; scanf("%lld", &n);
        int64_t base(n - 1);
        for(int64_t p = 2; p * p <= n; p++){
            if((n - 1) % p != 0){continue;}
            if(check(n, p) && p < base){base = p; break;}
            if(check(n, (n - 1) / p) && ((n - 1) / p < base)){base = p;}
        }

        printf("Case #%d: %lld\n", tc, base);
    }

    return 0;
}
