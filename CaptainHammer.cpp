#include <cstdio>
#include <cmath>

int main(){

    const long double g = 9.80;
    const long double PI = 3.14159265358979323846264338;

    int T; scanf("%d\n", &T);
    for(int s = 1; s <= T; s++){

        long double V, D; scanf("%Lf %Lf\n", &V, &D);
        long double ans = 0.5 * asin(D * g / (V * V)) * 180.0 / PI;
        printf("Case #%d: %.8Lf\n", s, ans);
    }


    return 0;
}
