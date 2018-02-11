#include <cstdio>
#include <vector>
#include <set>

int main(){

    const long H = 2500;
    int t; scanf("%d\n", &t);
    for(int c = 1; c <= t; c++){
        long n; scanf("%ld", &n);
        std::vector<long> count(H + 1, 0);
        for(long p = 0; p < n * (2 * n - 1); p++){long h; scanf("%ld", &h); ++count[h];}
        std::set<long> missing;
        for(long p = 1; p < count.size(); p++){if(count[p] % 2){missing.insert(p);}}

        printf("Case #%d: ", c);
        for(std::set<long>::iterator setIter = missing.begin(); setIter != missing.end(); setIter++){
            printf("%ld ", *setIter);
        }
        puts("");
    }

    return 0;
}
