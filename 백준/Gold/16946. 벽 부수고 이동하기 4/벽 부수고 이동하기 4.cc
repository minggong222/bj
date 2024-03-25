#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int n, m, cnt, num = 1;
int arr[1001][1001];
int ans[1001][1001];
int dp[1001][1001];
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
vector<int> a = { 0 };
bool visit[1001][1001];
void dfs(int a, int b) {
    visit[a][b] = true;
    queue<pair<int, int>> q;
    q.push({ a,b });
    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        cnt++;
        dp[i][j] = num;
        for (int k = 0; k < 4; k++) {
            int x = i + dir[k][0];
            int y = j + dir[k][1];
            if (x > 0 && x <= n && y > 0 && y <= m) {
                if (visit[x][y] || arr[x][y]) continue;
                q.push({ x,y });
                visit[x][y] = true;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        for (int j = 1; j <= m; j++) {
            arr[i][j] = str[j - 1] - '0';
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i][j] || visit[i][j])   continue;
            cnt = 0;
            dfs(i, j);
            a.push_back(cnt);
            num++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i][j]) {
                ans[i][j]++;
                map<int, int> M;
                for (int k = 0; k < 4; k++) {
                    int x = i + dir[k][0];
                    int y = j + dir[k][1];
                    if (x > 0 && x <= n && y > 0 && y <= m) {
                        if (arr[x][y] || M[dp[x][y]] > 0) continue;
                        ans[i][j] += a[dp[x][y]];
                        M[dp[x][y]]++;
                    }
                }
            }
            cout << ans[i][j] % 10;
        }
        cout << '\n';
    }
    return 0;
}