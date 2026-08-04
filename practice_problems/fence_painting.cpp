#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int john_length = b - a;
    int bessie_length = d - c;

    int overlap_start = max(a, c);
    int overlap_end = min(b, d);
    int overlap = max(0, overlap_end - overlap_start);

    int total_length = john_length + bessie_length - overlap;

    cout << total_length << "\n";

    return 0;
}