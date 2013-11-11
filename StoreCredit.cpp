#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    long numCases(0); scanf("%ld", &numCases);
    for(int currentCase = 1; currentCase <= numCases; currentCase++){
        int C(0); scanf("%d", &C);
        int P(0); scanf("%d", &P);
        int *prices = new int[P];
        int *sortedPrices = new int[P];
        for(int item = 0; item < P; item++){scanf("%d", prices + item); sortedPrices[item] = prices[item];}
        std::sort(sortedPrices, sortedPrices + P);
        bool done(0); int first(0), last(P - 1);
        while(first < last){
            int currentTotal = sortedPrices[first] + sortedPrices[last];
            if(currentTotal == C){break;}
            else if(currentTotal > C){--last;}
            else if(currentTotal < C){++first;}
        }

        for(int index = 0; index < P; index++){if(prices[index] == sortedPrices[first]){first = index; break;}}
        for(int index = 0; index < P; index++){if(prices[index] == sortedPrices[last] && index != first){last = index; break;}}
        if(last < first){int temp = first; first = last; last = temp;}

        printf("Case #%d: %d %d\n", currentCase, first + 1, last + 1);
    }

    return 0;
}
