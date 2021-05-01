#include <iostream>

int main(){

    int n, count = 1, sum = 0, multi = 1;

    std::cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {      
            std::cout << i << ", ";
            sum += i;
            multi *= i;
            count++;
        }
    }

    std::cout << n << ". ";
    sum += n;
    multi *= n;

    std::cout << "Ju yra " << count << ", ju suma yra " << sum << ", o sandauga yra " << multi << ".";
    


    return 0;
}