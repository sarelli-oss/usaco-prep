#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void check_line(char a, char b, char c, bool single_win[26], bool team_win[26][26]) {
    
    if (a == b && b == c) {
        single_win[a - 'A'] = true;
    }
    
    else if (a == b || b == c || a == c) {
        char first, second;
        if (a == b) { 
            first = a; 
            second = c; 
        } else if (b == c) { 
            first = b; 
            second = a; 
        } else { 
            first = a; 
            second = b; 
        }
        
        
        char low = min(first, second);
        char high = max(first, second);
        
        team_win[low - 'A'][high - 'A'] = true;
    }
}

int main() {


    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    int indi_count{0};
    int double_count{0};


    vector<string> board(3);
    for(int i{0}; i < 3; ++i) {
        cin >> board[i];
    }

    bool single_win[26] = {false};
    bool team_win[26][26] = {false};

    if(board[0][0] == board[0][1] && board[0][1] == board[0][2]) {
        
        single_win[board[0][0] - 'A'] = true;
    }

    else if(board[0][0] == board[0][1] || board[0][1] == board[0][2] || board[0][0] == board[0][2]) {
        check_line(board[0][0], board[0][1], board[0][2], single_win, team_win);
    }

    if(board[1][0] == board[1][1] && board[1][1] == board[1][2]) {
        single_win[board[1][0] - 'A'] = true;
    }

    else if(board[1][0] == board[1][1] || board[1][1] == board[1][2] || board[1][0] == board[1][2]) {
        check_line(board[1][0], board[1][1], board[1][2], single_win, team_win);
    }

    if(board[2][0] == board[2][1] && board[2][1] == board[2][2]) {
        single_win[board[2][0] - 'A'] = true;
    }

    else if(board[2][0] == board[2][1] || board[2][1] == board[2][2] || board[2][0] == board[2][2]) {
        check_line(board[2][0], board[2][1], board[2][2], single_win, team_win);
    }

    if(board[0][0] == board[1][0] && board[1][0] == board[2][0]) {
        single_win[board[0][0] - 'A'] = true;
    }

    else if(board[0][0] == board[1][0] || board[1][0] == board[2][0] || board[0][0] == board[2][0]) {
        check_line(board[0][0], board[1][0], board[2][0], single_win, team_win);
    }

    if(board[0][1] == board[1][1] && board[1][1] == board[2][1]) {
        single_win[board[0][1] - 'A'] = true;
    }

    else if(board[0][1] == board[1][1] || board[1][1] == board[2][1] || board[0][1] == board[2][1]) {
        check_line(board[0][1], board[1][1], board[2][1], single_win, team_win);
    }

    if(board[0][2] == board[1][2] && board[1][2] == board[2][2]) {
        single_win[board[0][2] - 'A'] = true;
    }

    else if(board[0][2] == board[1][2] || board[1][2] == board[2][2] || board[0][2] == board[2][2]) {
        check_line(board[0][2], board[1][2], board[2][2], single_win, team_win);
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        single_win[board[0][0] - 'A'] = true;
    }

    else if(board[0][0] == board[1][1] || board[1][1] == board[2][2] || board[0][0] == board[2][2]) {
        check_line(board[0][0], board[1][1], board[2][2], single_win, team_win);
    }

    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        single_win[board[0][2] - 'A'] = true;
    }

    else if(board[0][2] == board[1][1] || board[1][1] == board[2][0] || board[0][2] == board[2][0]) {
        check_line(board[0][2], board[1][1], board[2][0], single_win, team_win);
    }

    for (int i = 0; i < 26; ++i) {
    if (single_win[i]) {
        indi_count++;
    }
    }

    for (int i = 0; i < 26; ++i) {
        for (int j = i + 1; j < 26; ++j) {
            if (team_win[i][j]) {
                double_count++;
            }
        }
    }

    

    

    cout << indi_count << "\n";
    cout << double_count << "\n";





    return 0;
}