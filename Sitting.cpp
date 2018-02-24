#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        int r, c; scanf("%d %d", &r, &c);
        int p1 = r / 3 + (r % 3 >= 1);
        int p2 = r / 3 + (r % 3 >= 2);
        int q = c / 3 * 2 + c % 3;
        int ans(0);
        if (c <= 2) ans = (p1+p2) * c;
        else if (r <= 2) ans = r * q;
        else if (c % 3 == 0) ans = r * q;
        else if (c % 3 == 1) ans = (p1 + p2) * q + (r - p1 - p2) * (q - 1);
        else if (c % 3 == 2) ans = p1 * q + (r - p1) * (q - 1);
        printf("Case #%d: %d\n", tc, ans);
    }

    return 0;
}
