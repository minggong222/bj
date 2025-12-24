#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF -1234567890
using namespace std;

int n, m, answer = -1234567890;
int dir[3][2] = { {0,-1},{0,1},{1,0 } };
int arr[1001][1001];
int dp[1001][1001][3];
bool visit[1001][1001];
int dfs(int x, int y, int d) {
    if (x == n && y == m)   return arr[x][y];
    if (dp[x][y][d] != INF) return dp[x][y][d];

    visit[x][y] = true;
    int MValue = INF;
    for (int i = 0; i < 3; i++) {
        int nx = x + dir[i][0], ny = y + dir[i][1];
        if (nx > 0 && nx <= n && ny > 0 && ny <= m && !visit[nx][ny]) {
            MValue = max(MValue, dfs(nx, ny, i));
        }
    }
    visit[x][y] = false;
    dp[x][y][d] = arr[x][y] + MValue;
    return dp[x][y][d];
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            dp[i][j][0] = INF;
            dp[i][j][1] = INF;
            dp[i][j][2] = INF;
        }
    }
    answer = dfs(1, 1, 0);
    cout << answer;
    return 0;
}