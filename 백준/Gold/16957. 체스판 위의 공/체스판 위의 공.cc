#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int dir[8][2] = { {-1,-1} ,{-1,0} ,{-1,1} ,{0,-1} ,{0,1} ,{1,-1} ,{1,0}, {1,1} };
int n, m;
int arr[500][500];
int answer[500][500];
bool visit[500][500];
pair<int, int> dp[500][500];
pair<int, int> dfs(int x, int y) {
    visit[x][y] = true;
    dp[x][y] = { x,y };
    int mx = x, my = y, mm = arr[x][y];
    for (int i = 0; i < 8; i++) {
        int dx = x + dir[i][0], dy = y + dir[i][1];
        if (dx >= 0 && dx < n && dy >= 0 && dy < m && arr[dx][dy] < mm) {
            mx = dx;
            my = dy;
            mm = arr[dx][dy];
        }
    }
    
    if (visit[mx][my])
        dp[x][y] = dp[mx][my];
    else
        dp[x][y] = dfs(mx, my);
    
    return dp[x][y];
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dfs(i, j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x = dp[i][j].first;
            int y = dp[i][j].second;
            answer[x][y]++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << answer[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}