#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);


    int n;
    cin >> n;

    vector<string> side1(n);
    vector<string> side2(n);
    vector<int> count(26);

    for(int i{0}; i < n; ++i) {
        cin >> side1[i];
        cin >> side2[i];
    }

    for(int i{0}; i < n; ++i) {
        vector<char> freq1(26);
        vector<char> freq2(26);

        for(char ch: side1[i]) {
            freq1[ch - 'a']++;
        }

        for(char ch: side2[i]) {
            freq2[ch - 'a']++;
        }

        for(int letter{0}; letter < 26; ++letter) {
            count[letter] += max(freq1[letter], freq2[letter]);
        }
    }

    for(int i{0}; i < 26; ++i) {
        cout << count[i] << "\n";
    }

    


    return 0;


}