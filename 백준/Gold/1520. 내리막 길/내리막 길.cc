#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <deque>
using namespace std;
int map[501][501];
bool visited[501][501];
int answer[501][501];
int n, m;

int dfs(int i, int j) {
    if (visited[i][j]) {
        return answer[i][j];
    }
    if (answer[i][j] != 0) return answer[i][j];
    if (i == n && j == m) return 1;
    if (i + 1 <= n && map[i][j] > map[i + 1][j]) {
        answer[i][j] += dfs(i + 1, j);
    }
    if (j + 1 <= m && map[i][j] > map[i][j + 1]) {
        answer[i][j] += dfs(i, j + 1);
    }
    if (i - 1 > 0 && map[i][j] > map[i - 1][j]) {
        answer[i][j] += dfs(i - 1, j);
    }
    if (j - 1 > 0 && map[i][j] > map[i][j - 1]) {
        answer[i][j] += dfs(i, j - 1);
    }
    visited[i][j] = true;
    return answer[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
        }
    }
    int x = dfs(1, 1);
    cout << x;
    return 0;
}