#include <iostream>
#include <cmath>

int main(){

    std::cout << "|skaicius| kubas |\n";
    std::cout << "|----------------|\n";

    for (int y = 10; y <= 20; y++) {

        std::cout << "|" << y << "      |" << pow(y, 3) << "   |\n";
    }
    
    std::cout << "|----------------|";

    return 0;
}