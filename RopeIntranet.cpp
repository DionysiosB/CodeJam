#include <cstdio>

int main(){

    int numCases(0); scanf("%d\n", &numCases);

    for(int currentCase = 1; currentCase <= numCases; currentCase++){

        int numCables(0); scanf("%d\n", &numCables);
        int *X = new int[numCables]; int *Y = new int[numCables];
        for(int k = 0; k < numCables; k++){scanf("%d %d", X + k, Y + k);}


        long total(0);
        for(int first = 0; first < numCables - 1; first++){
            for(int second = first + 1; second < numCables; second++){
                if((X[second] > X[first] && Y[second] < Y[first]) || (X[second] < X[first] && Y[second] > Y[first])){++total;}
            }
        }

        printf("Case #%d: %ld\n", currentCase, total);
    }

    return 0;
}
