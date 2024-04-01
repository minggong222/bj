#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, black = 0, white = 0;
bool arr[11][11];
bool r[21];
bool l[21];
void dfs(int x, int y, int cnt, bool sw) {
    if (y > n) {
        x++;
        if (y % 2 == 0)
            y = 1;
        else
            y = 0;
    }
    if (x > n) {
        if (sw) {
            black = max(black, cnt);
        }
        else {
            white = max(white, cnt);
        }
        return;
    }
    if (arr[x][y] && !r[x + y] && !l[x - y + n]) {
        r[x + y] = true;
        l[x - y + n] = true;
        dfs(x, y + 2, cnt + 1, sw);
        r[x + y] = false;
        l[x - y + n] = false;
    }
    dfs(x, y + 2, cnt, sw);
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
    dfs(1, 1, 0, 0);
    dfs(1, 2, 0, 1);
    cout << black + white;
    return 0;
}