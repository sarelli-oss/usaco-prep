#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void solve() {

    long long n;
    cin >> n;

    std::vector<long long> all_ns;
    all_ns.push_back(n);    

    while(n != 1) {

        if(n % 2 == 0) {
            n /= 2;
        }

        else {
            n = 3*n + 1;
        }

        all_ns.push_back(n);


        

        
    }

    

    for (long long x : all_ns) {
        cout << x << " ";
    }
    cout << "\n";
    

} // namespace std

int main() {
    //os_base::sync_with_stdio(false);
    //cin.tie(NULL);

    solve();

    return 0;
}