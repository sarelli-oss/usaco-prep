#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> sizes(n);
    for (int i = 0; i < n; ++i) {
        cin >> sizes[i];
    }

    int max_d = 0;

    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int h = 0; h < n; ++h) {
            if (sizes[h] >= sizes[i] && sizes[h] <= sizes[i] + k) {
                count++;
            }
        }
        max_d = max(max_d, count);
    }

    cout << max_d << "\n";

    return 0;
}