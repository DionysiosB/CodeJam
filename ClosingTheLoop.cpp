#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n; std::cin >> n;
    for(int tc = 1; tc <= n; tc++){

        int num(0); std::cin >> num;
        std::vector<int> b, r;
        for(int p = 0; p < num; p++){
            std::string s; std::cin >> s;
            int x(0);
            if(s[s.size() - 1] == 'B'){s.pop_back(); x = atoi(s.c_str()); b.push_back(x);}
            else if(s[s.size() - 1] == 'R'){s.pop_back(); x = atoi(s.c_str()); r.push_back(x);}
        }

        sort(b.begin(), b.end()); std::reverse(b.begin(), b.end());
        sort(r.begin(), r.end()); std::reverse(r.begin(), r.end());

        long ans(0);
        for(int p = 0; p < b.size() && p < r.size(); p++){ans += (b[p] + r[p] - 2);}

        std::cout << "Case #" << tc << ": " << ans << std::endl;
    }

    return 0;
}
