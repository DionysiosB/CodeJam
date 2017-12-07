#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    for(int tc = 1; tc <= t; tc++){
        long N, K; std::cin >> N >> K;
        std::string ans("ON");
        for(int p = 0; p < N; p++){
            if(K % 2 == 0){ans = "OFF"; break;}
            K /= 2;
        }

        std::cout << "Case #" << tc << ": " << ans << std::endl;
    }

    return 0;
}
