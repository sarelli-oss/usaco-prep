#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    
    for (int i = 0; i < n; ++i) {
        cin >> y[i];
    }

    long long max_dist_sq = 0;

    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long dx = x[i] - x[j];
            long long dy = y[i] - y[j];
            long long dist_sq = dx * dx + dy * dy;

            if (dist_sq > max_dist_sq) {
                max_dist_sq = dist_sq;
            }
        }
    }

    cout << max_dist_sq << "\n";

    return 0;
}