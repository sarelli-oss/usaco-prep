#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {

    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a{0};
    int b{0};

    int x{0};
    int y{0};

    cin >> a >> b >> x >> y;

    int len1 = abs(b - a);
    int len2 = abs(x - a) + abs(y - b);
    int len3 = abs(y - a) + abs(x - b);

    cout << min({len1, len2, len3}) << '\n';


    return 0;


    

}


