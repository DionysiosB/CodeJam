#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int t; scanf("%d\n", &t);
    for(int c = 1; c <= t; c++){
        int n; scanf("%d\n", &n);
        std::vector<std::pair<int, char> > r(n);
        for(int p = 0; p < n; p++){int x; scanf("%d", &x); r[p] = std::make_pair(x, p + 'A');} 
        std::vector<std::string> res;
        while(true){
            sort(r.begin(), r.end());
            if(r[n - 1].first == 0){break;}
            std::string s;
            if((r[n - 1].first == r[n - 2].first) && (n == 2 || (n > 2 && r[n - 3].first == 0))){
                s = r[n - 1].second; --r[n - 1].first;
                s += r[n - 2].second; --r[n - 2].first;
            }
            else{s = r[n - 1].second; --r[n - 1].first;}
            res.push_back(s);
        }

        printf("Case #%d: ", c);
        for(int p = 0; p < res.size(); p++){std::cout << res[p] << " ";}
        std::cout << std::endl;
    }

    return 0;
}
