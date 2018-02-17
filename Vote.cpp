#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        int n, m; scanf("%d %d", &n, &m);
        double prob = (1.0 * n - m) / (1.0 * n + m);
        printf("Case #%d: %.7lf\n", tc, prob);
    }

    return 0;
}
