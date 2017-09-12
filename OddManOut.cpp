#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    for(int tc = 1; tc <= n; tc++){
        int g; scanf("%d\n", &g);
        long ans(0);
        while(g--){long x; scanf("%ld", &x); ans ^= x;}
        printf("Case #%d: %ld\n", tc, ans);
    }

    return 0;
}
