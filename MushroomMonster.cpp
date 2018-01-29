#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){
        int N; scanf("%d\n", &N);
        std::vector<int> a(N, 0);
        for(int p = 0; p < N; p++){scanf("%d", &a[p]);}
        
        long ansA(0);
        int maxDiff(0);
        for(int p = 1; p < N; p++){
            int diff = a[p - 1] - a[p];
            ansA += (diff > 0) * diff;
            maxDiff = (maxDiff > diff) ? maxDiff : diff;
        }

        long ansB(0);
        for(int p = 1; p < N; p++){ansB += (a[p - 1] < maxDiff) ? a[p - 1] : maxDiff;}

        printf("Case #%d: %ld %ld\n", tc, ansA, ansB);
    }

    return 0;
}
