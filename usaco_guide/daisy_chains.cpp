#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {


    int n;
    cin >> n;

    vector<double> p(n);
    for(int i{0}; i < n; ++i) {
        cin >> p[i];
    }

    int photos{0};

    for(int i{0}; i < n; ++i) {
        
        
        for(int h{i}; h < n; ++h) {
            double avg{0};
            double total{0};
            double count{0};
            for(int j{i}; j <= h; ++j) {
                total += p[j];
                count++;
            }
            avg = total/count;
            for(int j{i}; j <= h; ++j) {
                if(p[j] == avg) {
                    photos++;
                    break;
                }
            }
            
        }
    }

    cout << photos << endl;













    return 0;
}