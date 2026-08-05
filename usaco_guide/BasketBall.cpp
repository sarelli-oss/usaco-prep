#include <iostream>
#include <string>

using namespace std;

int main() {
    string record;
    
    while (cin >> record) {
        if (record.length() >= 2) {
            printf("%c\n", record[record.length() - 2]);
        }
    }
    
    return 0;
}