#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {


    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int n;
    cin >> n;

    vector<char> dir(n);
    vector<int> time(n);

    const int GRID_SIZE = 2005;
    int x = 1000;
    int y = 1000;

    int max_time = 20000;
    int current_step{0};

    
    vector<vector<int>> grid(GRID_SIZE, vector<int>(GRID_SIZE, -1));
    int rx{0};
    int ry{0};

    
    grid[y][x] = 0;

    for (int i = 0; i < n; ++i) {
        cin >> dir[i] >> time[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int t = 0; t < time[i]; ++t) {
            current_step++;
            if (dir[i] == 'N') {
                y += 1;
            } 
            else if (dir[i] == 'S') {
                y -= 1;
            } 
            else if (dir[i] == 'E') {
                x += 1;
            } 
            else if (dir[i] == 'W') {
                x -= 1;
            }

            
            if (grid[y][x] != -1) {
                int count = current_step - grid[y][x];

                if(count < max_time) {
                    max_time = count;
                }

                
            }

            grid[y][x] = current_step;
        }
    }

    if(max_time == 20000) {
        max_time = -1;
    }

    cout << max_time << "\n";

    return 0;

}