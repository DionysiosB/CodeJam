#include<cstdio>
#include<iostream>
#include<map>

int main(){

    std::map<char, std::pair<int, int> > v;
    v['a'] = std::make_pair(2, 1);
    v['b'] = std::make_pair(2, 2);
    v['c'] = std::make_pair(2, 3);
    v['d'] = std::make_pair(3, 1);
    v['e'] = std::make_pair(3, 2);
    v['f'] = std::make_pair(3, 3);
    v['g'] = std::make_pair(4, 1);
    v['h'] = std::make_pair(4, 2);
    v['i'] = std::make_pair(4, 3);
    v['j'] = std::make_pair(5, 1);
    v['k'] = std::make_pair(5, 2);
    v['l'] = std::make_pair(5, 3);
    v['m'] = std::make_pair(6, 1);
    v['n'] = std::make_pair(6, 2);
    v['o'] = std::make_pair(6, 3);
    v['p'] = std::make_pair(7, 1);
    v['q'] = std::make_pair(7, 2);
    v['r'] = std::make_pair(7, 3);
    v['s'] = std::make_pair(7, 4);
    v['t'] = std::make_pair(8, 1);
    v['u'] = std::make_pair(8, 2);
    v['v'] = std::make_pair(8, 3);
    v['w'] = std::make_pair(9, 1);
    v['x'] = std::make_pair(9, 2);
    v['y'] = std::make_pair(9, 3);
    v['z'] = std::make_pair(9, 4);
    v[' '] = std::make_pair(0, 1);


    std::string t; getline(std::cin, t);
    int n = atoi(t.c_str());
    for(int tc = 1; tc <= n; tc++){
        std::string s; getline(std::cin, s);
        std::string ans("");
        for(int p = 0; p < s.size(); p++){
            if((p > 0) && (v[s[p]].first == v[s[p - 1]].first)){ans += " ";}
            for(int k = 0; k < v[s[p]].second; k++){ans += std::to_string(v[s[p]].first);}
        }

        std::cout << "Case #" << tc << ": " << ans << std::endl;
    }

    return 0;
}

