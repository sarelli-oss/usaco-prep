#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <cmath>

using namespace std;

int main() {
    
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    
    
    int b1, b2, s1, s2, g1, g2, p1, p2;

    cin >> b1 >> b2;
    cin >> s1 >> s2;
    cin >> g1 >> g2;
    cin >> p1 >> p2;

    int gold_to_plat = p2-p1;
    int silver_to_gold = (g2-g1) + gold_to_plat;
    int bronze_to_silver = (s2-s1) + silver_to_gold;

    cout << bronze_to_silver << "\n";
    cout << silver_to_gold << "\n";
    cout << gold_to_plat << "\n";

    return 0;

}