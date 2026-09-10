#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {



    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> room(n);
    int cows = 0;

    for(int i{0}; i < n; ++i) {
        cin >> room[i];
        cows += room[i];
    }

    int current_dist{0};
    

    for(int i{0}; i < room.size(); ++i) {
        current_dist += i * room[i];


    }

    int lowest_dist = current_dist;

    for(int i{0}; i < n-1; ++i) {
        current_dist = current_dist - cows + (n* room[i]);
        lowest_dist = min(lowest_dist, current_dist);
    }

    cout << lowest_dist << "\n";



    return 0;

}