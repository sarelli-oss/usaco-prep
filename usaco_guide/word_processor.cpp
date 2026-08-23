#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
   
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    int current_len = 0;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        int word_len = word.length();

        
        if (current_len + word_len <= k) {
            if (current_len > 0) {
                cout << " ";
            }
            cout << word;
            current_len += word_len;
        } 
        
        else {
            cout << "\n" << word;
            current_len = word_len;
        }
    }

    cout << "\n";

    return 0;
}