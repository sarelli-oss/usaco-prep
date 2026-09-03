#include <iostream>
#include <cmath>

using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y;

    int total_dist = 0;
    int current_pos = x;
    int step_size = 1;
    int direction = 1; 

    while (true) {
        int next_pos = x + direction * step_size;

        
        if ((current_pos <= y && y <= next_pos) || (next_pos <= y && y <= current_pos)) {
            total_dist += abs(y - current_pos);
            break;
        } else {
            total_dist += abs(next_pos - current_pos);
            current_pos = next_pos;
            step_size *= 2;
            direction *= -1;
        }
    }

    cout << total_dist << "\n";

    return 0;
}