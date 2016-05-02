#include <cstdio>
#include <vector>

const double EPS = 0.1;

int main(){

    int numCases; scanf("%d\n", &numCases);
    for(int c = 1; c <= numCases; c++){

        int t; scanf("%d\n", &t);
        int na, nb; scanf("%d %d\n", &na, &nb);

        std::vector<std::pair<double, int> > va;
        std::vector<std::pair<double, int> > vb;
        for(int p = 0; p < na; p++){
            int sh, sm, fh, fm; scanf("%d:%d %d:%d\n", &sh, &sm, &fh, &fm);
            double x = 60 * sh + sm;
            double y = 60 * fh + fm + t - EPS;
            va.push_back(std::make_pair(x, -1));
            vb.push_back(std::make_pair(y, 1));
        }

        for(int p = 0; p < nb; p++){
            int sh, sm, fh, fm; scanf("%d:%d %d:%d\n", &sh, &sm, &fh, &fm);
            double x = 60 * sh + sm;
            double y = 60 * fh + fm + t - EPS;
            vb.push_back(std::make_pair(x, -1));
            va.push_back(std::make_pair(y, 1));
        }

        sort(va.begin(), va.end());
        sort(vb.begin(), vb.end());

        int neededA(0);
        int available(0);
        for(int p = 0; p < va.size(); p++){
            available += va[p].second;
            if(available < 0){++neededA; available = 0;}
        }

        int neededB(0);
        available = 0;
        for(int p = 0; p < vb.size(); p++){
            available += vb[p].second;
            if(available < 0){++neededB; available = 0;}
        }

        printf("Case #%d: %d %d\n", c, neededA, neededB);

    }

    return 0;
}
