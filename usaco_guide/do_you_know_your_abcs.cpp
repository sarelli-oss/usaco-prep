#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<long long> vec(7);
    for (int i = 0; i < 7; ++i) {
        cin >> vec[i];
    }

    
    sort(vec.begin(), vec.end());

    long long a = vec[0];                 
    long long b = vec[1];                 
    long long c = vec[6] - a - b;         

    cout << a << " " << b << " " << c << "\n";

    return 0;
}