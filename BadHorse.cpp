#include <iostream>
#include <vector>
#include <map>

void dfs(std::string vertex, std::map<std::string, std::vector<std::string> > &edgeMap, std::map<std::string, int> &groups){

    int currentGroup = groups[vertex];
    int neighborsGroup = 3 - currentGroup;
    std::vector<std::string> neighbors = edgeMap[vertex];

    for(int p = 0; p < neighbors.size(); p++){
        if(groups[neighbors[p]] == 0){groups[neighbors[p]] = neighborsGroup; dfs(neighbors[p], edgeMap, groups);}
        else if(groups[neighbors[p]] == currentGroup){groups[neighbors[p]] = -1; break;}
    }
}

int main(){

    std::ios::sync_with_stdio(false);

    int T; std::cin >> T;
    for(int s = 1; s <= T; s++){
        std::map<std::string, int> group;
        std::map<std::string, std::vector<std::string> > edges;
        std::vector<std::string> emptyVec;

        int m; std::cin >> m;
        for(int p = 0; p < m; p++){
            std::string x, y; std::cin >> x >> y;
            group[x] = 0; group[y] = 0;

            if(edges.count(x) <= 0){edges[x] = emptyVec;}
            if(edges.count(y) <= 0){edges[y] = emptyVec;}
            edges[x].push_back(y); edges[y].push_back(x);
        }

        bool possible(true);
        for(std::map<std::string, int>::iterator mapIter = group.begin(); mapIter != group.end(); mapIter++){
            if(mapIter->second < 0){possible = 0; break;}
            else if(mapIter -> second == 0){group[mapIter->first] = 1; dfs(mapIter->first, edges, group);}
        }

        std::cout << "Case #" << s << ": " << (possible ? "Yes" : "No") << std::endl;
    }

    return 0;
}
