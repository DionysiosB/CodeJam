#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){
        long l, r; scanf("%ld %ld\n", &l, &r);
        long long n = (l < r) ? l : r;
        long long res = n * (n + 1) / 2;
        printf("Case #%d:  %lld\n", tc, res);
    }

    return 0;
}
