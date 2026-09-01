#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int main() {

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m,n,k;

    cin >> m >> n >> k;

    vector<string> output;
    string line_act{""};

    for(size_t i{0}; i < m; ++i) {
        string line{""};

        cin >> line;

        
        for(size_t r{0}; r < n; ++r) {
            for(size_t s{0}; s < k; ++s) {
                line_act.push_back(line[r]);

            }
            
            

            
        }
        

        for(size_t h{0}; h < k; ++h) {
            output.push_back(line_act);
        }

        line_act = "";



    }

    for(size_t i{0}; i < output.size(); ++i) {
        cout << output[i] << "\n";
    }












    return 0;
}