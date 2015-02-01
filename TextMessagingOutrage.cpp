#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int N; scanf("%d\n", &N);

    for(int p = 1; p <= N; p++){

        int P, K, L; scanf("%d %d %d\n", &P, &K, &L);
        std::vector<long> freq(L, 0);
        for(int letter = 0; letter < L; letter++){scanf("%ld", &freq[letter]);}
        sort(freq.begin(), freq.end(), std::greater<long>());
        long output = 0;
        for(int letter = 0; letter < L; letter++){output += (1 + letter / K) * freq[letter];}
        std::cout << "Case #" << p << ": " << output << std::endl;
    }

    return 0;
}
