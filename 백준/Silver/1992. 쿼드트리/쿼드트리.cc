#include <iostream>

using namespace std;
int n;
int square[129][129];
void solve(int x, int y, int size) {
    int check = square[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (check == 1 && square[i][j] == 0) {
                check = 2;
                break;
            }
            else if (check == 0 && square[i][j] == 1) {
                check = 2;
                break;
            }
        }
        if (check == 2)  break;
    }
    if (check == 2) {
        cout << '(';
        solve(x, y, size / 2);
        solve(x, y + size / 2, size / 2);
        solve(x + size / 2, y, size / 2);
        solve(x + size / 2, y + size / 2, size / 2);
        cout << ')';
    }
    else if (check == 0)    cout << '0';
    else    cout << '1';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        for (int j = 1; j <= n; j++) {
            square[i][j] = str[j - 1]-48;
        }
    }
    solve(1, 1, n);
    return 0;
}