#include <cstdio>
#include <algorithm>

int main(){

    int T(0); scanf("%d\n", &T);

    for(int currentCase = 1; currentCase <= T; currentCase++){

        int n(0); scanf("%d\n", &n);
        long long *first = new long long[n]; long long *second = new long long[n];
        for(int k = 0; k < n; k++){scanf("%lld", first + k);}
        for(int k = 0; k < n; k++){scanf("%lld", second + k);}
        std::sort(first, first + n); std::sort(second, second + n);

        long long total(0);
        for(int k = 0; k < n; k++){total += first[k] * second[n - 1 - k];}

        printf("Case #%d: %lld\n", currentCase, total);
    }

    return 0;
}
