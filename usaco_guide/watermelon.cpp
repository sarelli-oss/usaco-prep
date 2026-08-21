#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <cmath>

int main() {


    int w = 0;
    std::cin >> w;

    if(w % 2 != 0 || w == 2) {
        std::cout << "NO" << "\n";
    }

    else {
        std::cout << "YES" << "\n";
    }

    return 0;


}
