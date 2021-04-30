#include <iostream>

int main(){

    std::cout << "helo";
    int n, uvid = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int u;
        std::cin >> u;
        uvid += u;
    }

    std::cout << "vidutinis ugis uvid = " << uvid / n << " cm";
    

    return 0;
}