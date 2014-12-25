#include <cstdio>
#include <set>

int main(){

    const int N = 4;
    int T; scanf("%d\n", &T);

    for(int c = 1; c <= T; c++){

        int firstRow; scanf("%d", &firstRow);
        std::set<int> firstNumbers;
        std::set<int> output;

        for(int p = 1; p <= N; p++){
            for(int q = 0; q < N; q++){
                int temp; scanf("%d", &temp);
                if(p == firstRow){firstNumbers.insert(temp);}
            }
            scanf("\n");
        }

        int secondRow; scanf("%d\n", &secondRow);

        for(int p = 1; p <= N; p++){
            for(int q = 0; q < N; q++){
                int temp; scanf("%d", &temp);
                if(p == secondRow && firstNumbers.find(temp) != firstNumbers.end()){output.insert(temp);}
            }
            scanf("\n");
        }

        printf("Case #%d: ", c);

        if(output.size() == 0){puts("Volunteer cheated!");}
        else if(output.size() == 1){printf("%d\n", *output.begin());}
        else{puts("Bad magician!");}
    }

    return 0;
}
