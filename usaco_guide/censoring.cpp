#include <iostream>
#include <string>

using namespace std;

int main() {
    
    
    
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    if (!(cin >> s >> t)) return 0;

    string result;
    result.reserve(s.size());

    int t_len = t.size();

    for (char c : s) {
        
        result.push_back(c);

        
        if (result.size() >= t_len && 
            result.substr(result.size() - t_len, t_len) == t) {
            
            result.resize(result.size() - t_len);
        }
    }

    cout << result << "\n";

    return 0;
}