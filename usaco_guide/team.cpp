#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <cmath>

using namespace std;

int main() {
    

    int n{0};
    int prob{0};
    int p{0};
    int v{0};
    int t{0};

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> p >> v >> t;
        if(p + v + t >= 2){
            prob ++;
        }

    }

    cout << prob << endl;
    
    return 0;

}
