#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int get_cost(const vector<string>& grid, int n, int rb, int cb) {
    int k = 0;
    if (grid[rb][cb] == '#') k++;
    if (grid[rb][n - 1 - cb] == '#') k++;
    if (grid[n - 1 - rb][cb] == '#') k++;
    if (grid[n - 1 - rb][n - 1 - cb] == '#') k++;
    return min(k, 4 - k);
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, u;
    if (!(cin >> n >> u)) return 0;

    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    
    int total_cost = 0;
    for (int r = 0; r < n / 2; ++r) {
        for (int c = 0; c < n / 2; ++c) {
            total_cost += get_cost(grid, n, r, c);
        }
    }

    
    cout << total_cost << "\n";

    
    for (int i = 0; i < u; ++i) {
        int r, c;
        cin >> r >> c;
        r--;
        c--;

        
        int rb = min(r, n - 1 - r);
        int cb = min(c, n - 1 - c);

        
        total_cost -= get_cost(grid, n, rb, cb);

        
        grid[r][c] = (grid[r][c] == '#') ? '.' : '#';

        
        total_cost += get_cost(grid, n, rb, cb);

        
        cout << total_cost << "\n";
    }

    return 0;
}