#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        long d, n; scanf("%ld %ld", &d, &n);
        double maxDur(0);
        for(long p = 0; p < n; p++){
            long k, s; scanf("%ld %ld", &k, &s);
            double dur = (1.0 * d - k) / s;
            maxDur = (maxDur > dur) ? maxDur : dur;
        }

        double maxSpeed = d / maxDur;
        printf("Case #%d: %.7lf\n", tc, maxSpeed);
    }

    return 0;
}
