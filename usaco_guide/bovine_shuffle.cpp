#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {



    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);


    int n;
    cin >> n;
    vector<int> position(n);
    vector<int> id(n);
    
    for(int i{0}; i < n; ++i) {
        cin >> position[i];
        position[i] -= 1;

    }

    for(int i{0}; i < n; ++i) {
        cin >> id[i];
        
    }

            
    for (int h = 0; h < 3; ++h) {
    vector<int> temp(n);

    for (int i = 0; i < n; ++i) {
        temp[i] = id[position[i]];
    }

    id = temp; 
}

    for(int i{0}; i < n; ++i) {
        cout << id[i] << "\n";
    }



    return 0;
}