#include <iostream>
#include <vector>

int main(){
    
    int t; std::cin >> t;
    for(int tc = 1; tc <= t; tc++){

        int n; std::cin >> n;
        std::vector<int> b, r;
        b.push_back(1); r.push_back(1);
        for(int p = 0; p < n; p++){
            std::string x; int y;
            std::cin >> x >> y;
            if(x == "B"){b.push_back(y);}
            else if(x == "O"){r.push_back(y);}
        }

        bool done(0);
        int time(0);
        while(!done){



        }



        printf("Case #%d: %d\n", tc, res);
    }

    return 0;
}
