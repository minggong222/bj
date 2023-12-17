#include <iostream>
#include <queue>
using namespace std;
int n, white = 0, blue = 0;
int square[129][129];
void solve(int x, int y, int size) {
    int color = square[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (color == 1 && square[i][j] == 0) {
                color = 2;
                break;
            }
            else if (color == 0 && square[i][j] == 1) {
                color = 2;
                break;
            }
        }
        if (color == 2)  break;
    }
    if (color == 2) {
        solve(x, y, size / 2);
        solve(x, y + size / 2, size / 2);
        solve(x + size / 2, y, size / 2);
        solve(x + size / 2, y + size / 2, size / 2);
    }
    else if (color == 0)    white++;
    else    blue++;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> square[i][j];
    solve(1, 1, n);
    cout << white << '\n' << blue;
    return 0;
}