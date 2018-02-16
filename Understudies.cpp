#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){

        int n; scanf("%d", &n);
        std::vector<double> a(2 * n);
        for(int p = 0; p < 2 * n; p++){scanf("%lf", &a[p]);}
        sort(a.begin(), a.end());
        double prob(1.0);
        for(int p = 0; p < n; p++){prob *= (1.0 - a[p] * a[2 * n - 1 - p]);}
        printf("Case #%d: %.7lf\n", tc, prob);
    }

    return 0;
}
