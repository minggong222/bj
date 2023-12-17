#include <iostream>

using namespace std;
int n;
int square[2188][2188];
int answer[3];
void solve(int x, int y, int size) {
    int check = square[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (check != square[i][j]) {
                check = 2;
                break;
            }
        }
        if (check == 2)  break;
    }
    if (check == 2) {
        solve(x, y, size / 3);
        solve(x, y + size / 3, size / 3);
        solve(x, y + (size / 3) * 2, size / 3);
        solve(x + size / 3, y, size / 3);
        solve(x + size / 3, y + size / 3, size / 3);
        solve(x + size / 3, y + (size / 3) * 2, size / 3);
        solve(x + (size / 3) * 2, y, size / 3);
        solve(x + (size / 3) * 2, y + size / 3, size / 3);
        solve(x + (size / 3) * 2, y + (size / 3) * 2, size / 3);
    }
    else if (check == -1)    answer[0]++;
    else if (check == 0)   answer[1]++;
    else    answer[2]++;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> square[i][j];
        }
    }
    solve(1, 1, n);
    cout << answer[0] << '\n' << answer[1] << '\n' << answer[2];
    return 0;
}