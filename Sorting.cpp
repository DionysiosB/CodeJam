#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){

        int n; scanf("%d", &n);
        std::vector<int> r(n, 0);
        std::vector<int> alex;
        std::vector<int> bob;
        for(int p = 0; p < n; p++){
            int x; scanf("%d", &x);
            r[p] = (2 + x % 2) % 2;
            if(x % 2){alex.push_back(x);}
            else{bob.push_back(x);}
        }

        sort(alex.begin(), alex.end());
        sort(bob.begin(), bob.end());
        int a(0), b(bob.size() - 1);
        for(int p = 0; p < n; p++){
            if(r[p]){r[p] = alex[a++];}
            else{r[p] = bob[b--];}
        }

        printf("Case #%d: ", tc);
        for(int p = 0; p < n; p++){printf("%d ", r[p]);}
        puts("");
    }

    return 0;
}
