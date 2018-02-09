#include <cstdio>

long long gcd (long long a, long long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){

        long long nom(0), den(0); scanf("%lld/%lld\n", &nom, &den);
        long long div = gcd(nom, den);
        nom /= div; den /= div;

        bool possible(1);
        long long ans(0);
        if((den & (den - 1)) != 0){possible = 0;}
        else{while(nom < den){nom *= 2; ++ans;}}

        printf("Case #%d: ", tc);
        if(possible){printf("%lld\n", ans);} else{puts("impossible");}
    }

    return 0;
}
