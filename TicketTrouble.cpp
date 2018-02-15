#include <cstdio>
#include <vector>
#include <set>

int main(){

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        int f, s; scanf("%d %d", &f, &s);
        std::vector<std::set<int> > a(s + 1);
        for(int p = 0; p < f; p++){
            int x, y; scanf("%d %d", &x, &y);
            a[x].insert(y); a[y].insert(x);
        }

        int count(0);
        for(int p = 1; p <= s; p++){count = (count > a[p].size()) ? count : a[p].size();}
        printf("Case #%d: %d\n", tc, count);
    }

    return 0;
}
