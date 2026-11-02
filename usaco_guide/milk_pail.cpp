#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int X, Y, M;
    if (!(cin >> X >> Y >> M)) return 0;

    int max_milk = 0;

    for (int a = 0; a * X <= M; ++a) {
       
        for (int b = 0; a * X + b * Y <= M; ++b) {
            int total = a * X + b * Y;
            max_milk = max(max_milk, total);
        }
    }

    cout << max_milk << "\n";

    return 0;
}