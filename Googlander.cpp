#include <iostream>
#include <vector>

int main(){

    const int64_t R = 25;
    const int64_t C = 25;

    std::vector<std::vector<long> > counts(R + 1, std::vector<long>(C + 1, 0));
    for(int64_t col = 1; col <= C; col++){counts[1][col] = 1;}
    for(int64_t row = 1; row <= R; row++){counts[row][1] = 1;}

    for(int64_t row = 2; row <= R; row++){
        for(int64_t col = 2; col <= C; col++){
            counts[row][col] = counts[row - 1][col] + counts[row][col - 1];
        }
    }

    int64_t T; std::cin >> T;
    for(int64_t a = 1; a <= T; a++){
        int64_t rows, cols; std::cin >> rows >> cols;
        std::cout << "Case #" << a << ": " << counts[rows][cols] << std::endl;
    }

    return 0;
}
