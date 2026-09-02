#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> limit(100);
    int current_mile = 0;
    for (int i = 0; i < n; ++i) {
        int length, speed;
        cin >> length >> speed;
        for (int j = 0; j < length; ++j) {
            limit[current_mile++] = speed;
        }
    }

    vector<int> bessie(100);
    current_mile = 0;
    for (int i = 0; i < m; ++i) {
        int length, speed;
        cin >> length >> speed;
        for (int j = 0; j < length; ++j) {
            bessie[current_mile++] = speed;
        }
    }

    int max_over = 0;
    for (int i = 0; i < 100; ++i) {
        max_over = max(max_over, bessie[i] - limit[i]);
    }

    cout << max_over << "\n";

    return 0;
}