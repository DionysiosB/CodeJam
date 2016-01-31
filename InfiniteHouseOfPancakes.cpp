#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int T; std::cin >> T;
    for(int testCase = 1; testCase <= T; testCase++){

        int n; scanf("%d\n", &n);
        std::vector<int> cakes(n);
        int maxCakes(0);
        for(int p = 0; p < n; p++){
            std::cin >> cakes[p];
            maxCakes = std::max(maxCakes, cakes[p]);
        }

        int minTime(maxCakes);
        for(int maxAfter = 1; maxAfter <= maxCakes; maxAfter++){
            int special(0);
            for(int p = 0; p < n; p++){
                if(cakes[p] <= maxAfter){continue;}
                special += (cakes[p] / maxAfter) - (cakes[p] % maxAfter == 0);
            }
            //std::cout << " Target: " << maxAfter << " Time: " << maxAfter << " + " << special << " = " << special + maxAfter << std::endl;

            minTime = std::min(minTime, special + maxAfter);
        }

        std::cout << "Case #" << testCase << ": " << minTime << std::endl;
    }

    return 0;
}
