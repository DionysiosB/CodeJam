#include <iostream>

int main(){

    int T; std::cin >> T;
    for(int a = 1; a <= T; a++){

        int64_t K, V; std::cin >> K >> V;
        int64_t ans = (K + 1) + V * (V + 1) * (3 * K - 2 * V + 2);
        std::cout << "Case #" << a << ": " << ans << std::endl;
    }

    return 0;
}
