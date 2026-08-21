#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <cmath>

using namespace std;
int main() {

    long long w{0};
    long long k{0};
    long long n{0};

    cin >> k >> n >> w;

    long long total_money_needed{0};
    for(long long i = 1; i <= w; i++) {
        total_money_needed += k*i;
    }

    if(total_money_needed <= n) {
        cout << 0 << "\n";
    }

    else {
        cout << total_money_needed - n << "\n";
    }


    return 0;
}