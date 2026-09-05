#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n, s, t, b;
    cin >> n;
    int max = 0;

    vector<int> buckets_at_time(1001);

    for(int i{0}; i < n; ++i) {
        cin >> s >> t >> b;
        for(int h{s}; h <= t; ++h) {
            buckets_at_time[h] += b;
        }

    }

    for(size_t i{0}; i < buckets_at_time.size(); ++i) {
        if(buckets_at_time[i] > max) {
            max = buckets_at_time[i];
        }
    }

    cout << max << "\n";

    



























    return 0;
}