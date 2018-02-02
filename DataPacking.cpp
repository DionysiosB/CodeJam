#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){
        int N, X; scanf("%d %d\n", &N, &X);
        std::vector<int> a(N, 0);
        for(int p = 0; p < N; p++){scanf("%d", &a[p]);}
        sort(a.begin(), a.end());
        int left(0), right(N - 1), count(0);
        while(left < right){
            if(a[left] + a[right] <= X){++left;}
            ++count; --right;
        }
        count += (left == right);
        printf("Case #%d: %d\n", tc, count);

    }

    return 0;
}
