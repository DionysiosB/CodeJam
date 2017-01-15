#include <cstdio>
#include <iostream>
#include <set>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){
        int n; scanf("%d\n", &n);
        int numChars(0);
        std::string res("");
        while(n--){
            std::string s; getline(std::cin, s);
            std::set<char> diff;
            for(size_t p = 0; p < s.size(); p++){
                if(s[p] == ' '){continue;}
                diff.insert(s[p]);
            }
            if((diff.size() > numChars) || ((diff.size() == numChars) && s < res)){
                res = s;
                numChars = diff.size();
            }
        }

        std::cout << "Case #" << tc << ": " << res << std::endl;
    }

    return 0;
}
