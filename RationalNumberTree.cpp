#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d\n", &t);
    for(int tc = 1; tc <= t; tc++){

        int qt; scanf("%d", &qt);
        if(qt == 1){

            unsigned long long num; scanf("%llu\n", &num);
            std::vector<bool> a;
            while(num > 0){a.push_back(num % 2); num /= 2;}
            unsigned long long nom(0), den(1);
            for(int p = a.size() - 1; p >= 0; p--){
                if(a[p]){nom += den;} 
                else{den += nom;}
            }
            printf("Case #%d: %llu %llu\n", tc, nom, den);
        }
        else if(qt == 2){
            unsigned long long nom(0), den(0); scanf("%llu %llu\n", &nom, &den);
            std::vector<bool> a;
            while(nom > 0){
                if(nom >= den){a.push_back(1); nom -= den;}
                else if(nom < den){a.push_back(0); den -= nom;}
            }

            unsigned long long num(0);
            for(int p = a.size() - 1; p >= 0; p--){num = 2 * num + a[p];}

            printf("Case #%d: %llu\n", tc, num);
        }
    }

    return 0;
}
