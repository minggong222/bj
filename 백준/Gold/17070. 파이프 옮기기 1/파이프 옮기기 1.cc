#include <iostream>
using namespace std;
int n, answer = 0;
int arr[17][17];
void dfs(int x, int y, int d) {
    if (x == n && y == n) {
        answer++;
        return;
    }
    if (y + 1 <= n && !arr[x][y + 1] && (d == 1 || d == 3)) {
        dfs(x, y + 1, 1);
    }
    if (x + 1 <= n && !arr[x + 1][y] && (d == 2 || d == 3)) {
        dfs(x + 1, y, 2);
    }
    if (x + 1 <= n && y + 1 <= n && !arr[x + 1][y] && !arr[x][y + 1] && !arr[x + 1][y + 1]) {
        dfs(x + 1, y + 1, 3);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    dfs(1, 2, 1);
    cout << answer;
    return 0;
}