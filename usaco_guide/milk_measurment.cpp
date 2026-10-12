#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
#include <math.h>

using namespace std;

int main() {

    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);


    int n;
    cin >> n;

    int days{0};
    vector<tuple<int, string, int>> v(n);

    for (int i = 0; i < v.size(); ++i) {
        int d;
        string n;
        int g;
        cin >> d >> n >> g;
        v[i] = {d, n, g};
    }

    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return get<0>(a) < get<0>(b);
    });


    int b_max{7};
    int m_max{7};
    int e_max{7};

    vector<int> before = {b_max, m_max, e_max};
    bool b_was = true, e_was = true, m_was = true;
    

    for(int i{0}; i < n; ++i) {
        
        if(get<1>(v[i]) == "Mildred") {
            m_max += get<2>(v[i]);
        }

        else if(get<1>(v[i]) == "Elsie") {
            e_max += get<2>(v[i]);
        }

        else if(get<1>(v[i]) == "Bessie") {
            b_max += get<2>(v[i]);
        }

        int cur_max = max({b_max, e_max, m_max});

        
        bool b_is = (b_max == cur_max);
        bool e_is = (e_max == cur_max);
        bool m_is = (m_max == cur_max);

        
        if (b_is != b_was || e_is != e_was || m_is != m_was) {
            days++;
            b_was = b_is;
            e_was = e_is;
            m_was = m_is;
        }

        
    }

    cout << days << endl;

    return 0;
}