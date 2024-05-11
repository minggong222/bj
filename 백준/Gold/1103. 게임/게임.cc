#include <iostream>
#include <stack>
#define ll long long
using namespace std;
int n, m, answer = 0;
char arr[50][50];
int ans[50][50];
bool visit[50][50];
void dfs(int x, int y, int cnt) {
    if (answer == -1)
        return;
    int dis = arr[x][y] - '0';
    answer = max(answer, cnt);
    ans[x][y] = cnt;
    visit[x][y] = true;
    if (x + dis < n && arr[x + dis][y] != 'H') {
        if (visit[x + dis][y]) {
            answer = -1;
            return;
        }
        if (ans[x + dis][y] < cnt + 1)
            dfs(x + dis, y, cnt + 1);
    }
    if (x - dis >= 0 && arr[x - dis][y] != 'H') {
        if (visit[x - dis][y]) {
            answer = -1;
            return;
        }
        if (ans[x - dis][y] < cnt + 1)
            dfs(x - dis, y, cnt + 1);
    }
    if (y + dis < m && arr[x][y + dis] != 'H') {
        if (visit[x][y + dis]) {
            answer = -1;
            return;
        }
        if (ans[x][y + dis] < cnt + 1)
            dfs(x, y + dis, cnt + 1);
    }
    if (y - dis >= 0 && arr[x][y - dis] != 'H') {
        if (visit[x][y - dis]) {
            answer = -1;
            return;
        }
        if (ans[x][y - dis] < cnt + 1)
            dfs(x, y - dis, cnt + 1);
    }
    visit[x][y] = false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            arr[i][j] = str[j];
        }
    }
    dfs(0, 0, 1);
    cout << answer;
    return 0;
}