#include <iostream>

int main(){

    int t; std::cin >> t;
    for(int tc = 1; tc <= t; tc++){
        std::string kingdom; std::cin >> kingdom;
        char lastLetter = kingdom[kingdom.size() - 1];
        std::string ruler("");
        if(lastLetter == 'y' || lastLetter == 'Y'){ruler = "nobody.";}
        else if(lastLetter == 'a' || lastLetter == 'e' || lastLetter == 'i' || lastLetter == 'o' || lastLetter == 'u' || lastLetter == 'A' || lastLetter == 'E' || lastLetter == 'I' || lastLetter == 'O' || lastLetter == 'U'){ruler = "a queen.";}
        else{ruler = "a king.";}

        std::cout << "Case #" << tc << ": " << kingdom << " is ruled by " << ruler << std::endl;
    }

    return 0;
}
