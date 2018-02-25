#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const int64_t MOD = 1000000007;
    const int64_t N = 10005;
    std::vector<int64_t> binPow(N, 1);
    for(long p = 1; p < N; p++){binPow[p] = (2 * binPow[p - 1]) % MOD;}

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        long n; scanf("%ld", &n);
        std::vector<int64_t> a(n);
        for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        int64_t total(0);
        for(long p = 0; p < n; p++){
            for(long q = p + 1; q < n; q++){
                total += (a[q] - a[p]) * binPow[q - p - 1];
                total %= MOD;
            }
        }

        printf("Case #%d: %lld\n", tc, total);
    }

    return 0;
}
