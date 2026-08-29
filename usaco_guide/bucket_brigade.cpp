#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    int b_r = 0, b_c = 0, l_r = 0, l_c = 0, r_r = 0, r_c = 0;

    for (int r = 0; r < 10; ++r) {
        string row;
        cin >> row;

        for (int c = 0; c < 10; ++c) {
            if (row[c] == 'B') {
                b_r = r;
                b_c = c;
            } else if (row[c] == 'R') {
                r_r = r;
                r_c = c;
            } else if (row[c] == 'L') {
                l_r = r;
                l_c = c;
            }
        }
    }

    int dist = abs(b_r - l_r) + abs(b_c - l_c) - 1;

    if (b_r == l_r && r_r == b_r) {
        if ((b_c < r_c && r_c < l_c) || (l_c < r_c && r_c < b_c)) {
            dist += 2;
        }
    }
    else if (b_c == l_c && r_c == b_c) {
        if ((b_r < r_r && r_r < l_r) || (l_r < r_r && r_r < b_r)) {
            dist += 2;
        }
    }

    cout << dist << '\n';

    return 0;
}