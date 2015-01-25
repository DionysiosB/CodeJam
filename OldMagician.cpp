#include <cstdio>
#include <iostream>
#include <string>

int main(){

    int N; scanf("%d\n", &N);

    for(int p = 1; p <= N; p++){

        long W, B; scanf("%ld %ld\n", &W, &B);
        std::cout << "Case #" << p << ": " << ((B % 2) ? "BLACK" : "WHITE") << std::endl;

    }

    return 0;
}
