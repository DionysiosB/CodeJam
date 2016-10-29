#include <cstdio>
#include <map>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){
        long n, k; scanf("%ld %ld\n", &n, &k);
        std::map<long, long> a, b, c, d;

        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(a.count(x) <= 0){a[x] = 0;}; ++a[x];}
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(b.count(x) <= 0){b[x] = 0;}; ++b[x];}
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(c.count(x) <= 0){c[x] = 0;}; ++c[x];}
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(d.count(x) <= 0){d[x] = 0;}; ++d[x];}

        std::map<long, long> ab;
        for(std::map<long, long>::iterator aIter = a.begin(); aIter != a.end(); aIter++){
            for(std::map<long, long>::iterator bIter = b.begin(); bIter != b.end(); bIter++){
                long x  = aIter->first; long y = bIter -> first;
                long repa = aIter -> second; long repb = bIter -> second;
                long xy = x ^ y;
                if(ab.count(xy) <= 0){ab[xy] = 0;}
                ab[xy] += repa * repb;
            }
        }

        std::map<long, long> cd;
        for(std::map<long, long>::iterator cIter = c.begin(); cIter != c.end(); cIter++){
            for(std::map<long, long>::iterator dIter = d.begin(); dIter != d.end(); dIter++){
                long x  = cIter->first; long y = dIter -> first;
                long repc = cIter -> second; long repd = dIter -> second;
                long xy = x ^ y;
                if(cd.count(xy) <= 0){cd[xy] = 0;}
                cd[xy] += repc * repd;
            }
        }

        long long res(0);
        for(std::map<long, long>::iterator abIter = ab.begin(); abIter != ab.end(); abIter++){
            long candidate = k ^ (abIter -> first);
            if(cd.count(candidate) > 0){res += (abIter -> second) * cd[candidate];}
        }

        printf("Case #%d: %lld\n", tc, res);
    }

    return 0;
}
