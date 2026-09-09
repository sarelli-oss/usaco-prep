#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n;
    cin >> n;

    vector<string> type(n);
    vector<int> low(n);
    vector<int> high(n);

    int lowest = 0, highest = 1000000000;

    for(int i = 0; i < n; ++i) {
        cin >> type[i] >> low[i] >> high[i];
    }


    for(int i{n - 1}; i >= 0; --i) {
        
        
        if(type[i] == "none") {
            lowest = max(lowest, low[i]);
            highest = min (highest, high[i]);
        }

        if(type[i] == "on") {
            lowest = max(0, lowest - high[i]);
            highest = highest - low[i];
        }

        if(type[i] == "off") {
            lowest += low[i];
            highest += high[i];
        }
        
        
    }

    cout << lowest << " " <<  highest << "\n";
    lowest = 0;
    highest = 1000000000;

    for(int i{0}; i < n ; ++i) {
        if(type[i] == "none") {
            lowest = max(lowest, low[i]);
            highest = min (highest, high[i]);
        }

        if(type[i] == "off") {
            lowest = max(0, lowest - high[i]);
            highest = highest - low[i];
        }

        if(type[i] == "on") {
            lowest += low[i];
            highest += high[i];
        }
    }





    cout << lowest << " " << highest << "\n";





    return 0;

}