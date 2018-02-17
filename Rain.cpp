#include <cstdio>
#include <vector>

//THIS IS WRONG; SEE SECOND EXAMPLE
int main(){

    int t; scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        int R, C; scanf("%d %d", &R, &C);
        std::vector<std::vector<int> > a(R, std::vector<int>(C, 0));
        for(int row = 0; row < R; row++){for(int col = 0; col < C; col++){scanf("%d", &a[row][col]);}}
        std::vector<std::vector<int> > left = a;
        std::vector<std::vector<int> > right = a;
        std::vector<std::vector<int> > up = a;
        std::vector<std::vector<int> > down = a;
        for(int row = 0; row < R; row++){
            for(int col = 1; col < C; col++){left[row][col] = (a[row][col] > left[row][col - 1]) ? a[row][col] : left[row][col - 1];}
            for(int col = C - 2; col >= 0; col--){right[row][col] = (a[row][col] > right[row][col + 1]) ? a[row][col] : right[row][col + 1];}
        }
        for(int col = 0; col < C; col++){
            for(int row = 1; row < R; row++){up[row][col] = (a[row][col] > up[row - 1][col]) ? a[row][col] : up[row - 1][col];}
            for(int row = R - 2; row >= 0; row--){down[row][col] = (a[row][col] > down[row + 1][col]) ? a[row][col] : down[row + 1][col];}
        }

        long total(0);
        for(int row = 0; row < R; row++){
            for(int col = 0; col < C; col++){
                long minRow = (left[row][col] < right[row][col]) ? left[row][col] : right[row][col];
                long minCol = (down[row][col] < up[row][col]) ? down[row][col] : up[row][col];
                long minRowCol = (minRow < minCol) ? minRow : minCol;
                total += (minRowCol - a[row][col]);
            }
        }

        printf("Case #%d: %ld\n", tc, total);
    }

    return 0;
}
