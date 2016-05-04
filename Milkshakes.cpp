#include <iostream>
#include <vector>

int main(){

    int C; std::cin >> C;
    for(int c = 1; c <= C; c++){

        int N; std::cin >> N;
        int M; std::cin >> M;

        std::vector<std::vector<std::pair<int, int> > > prefs(M);
        for(int p = 0; p < M; p++){
            int t; std::cin >> t;
            std::vector<std::pair<int, int> > ind;
            std::pair<int, int> malt = std::make_pair(-1, -1);
            for(int q = 0; q < t; q++){
                int x, y; std::cin >> x >> y;
                if(y == 1){malt = std::make_pair(x, 1);}
                else{ind.push_back(std::make_pair(x, 0));}
            }
            if(malt.first >= 0){ind.push_back(malt);}
            prefs[p] = ind;
        }

        std::vector<int> shakes(N + 1, 0);
        bool change(1), possible(1);

        while(change && possible){
            change = 0;
            for(int p = 0; p < M; p++){
                std::vector<std::pair<int, int> > current = prefs[p];
                bool satisfied(0);
                for(int q = 0; q < current.size(); q++){
                    int which = current[q].first; int what = current[q].second;
                    if(shakes[which] == what){satisfied = 1; break;}
                    else if(shakes[which] == 0 && what == 1){
                        shakes[which] = 1; change = 1; satisfied = 1; 
                        break;
                    }
                }
                if(!satisfied){possible = 0; break;}
            }
        }

        std::cout << "Case #" << c << ": "; 
        if(possible){for(int p = 1; p <= N; p++){std::cout << shakes[p] << " ";}}
        else{std::cout << "IMPOSSIBLE";}
        std::cout << std::endl;
    }

    return 0;
}
