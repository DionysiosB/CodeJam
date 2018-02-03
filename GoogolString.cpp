#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){
        long long k; scanf("%lld\n", &k);

        int bit = 0; int flips(0);
        while(true){
            if(k && (k - 1) == 0){break;}
            long long power(1); while(power < k){power *= 2;}
            ++flips; k = power - k;
        }

        bit = (bit + flips) % 2;

        printf("Case #%d: %d\n", tc, bit);
    }

    return 0;
}
