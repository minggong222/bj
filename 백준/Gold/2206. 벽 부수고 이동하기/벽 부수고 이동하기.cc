#include <iostream>
#include <queue>
using namespace std;
int n, m, answer = -1;
int arr[1001][1001];
int visit[1001][1001][2];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            arr[i][j + 1] = str[j] - '0';
        }
    }
    queue<pair<pair<int, int>, bool>> q;
    q.push(make_pair(make_pair(1, 1), false));
    visit[1][1][0] = 1;
    while (!q.empty()) {
        int i = q.front().first.first;
        int j = q.front().first.second;
        bool sw = q.front().second;
        int cnt = visit[i][j][sw];
        q.pop();
        if (i == n && j == m) {
            answer = visit[i][j][sw];
            break;
        }
        visit[i][j][sw] = true;
        if (i - 1 > 0 && !visit[i - 1][j][sw]) {
            if (!arr[i - 1][j]) {
                q.push(make_pair(make_pair(i - 1, j), sw));
                visit[i - 1][j][sw] = cnt + 1;
            }
            else if (!sw) {
                q.push(make_pair(make_pair(i - 1, j), true));
                visit[i - 1][j][true] = cnt + 1;
            }
        }
        if (i + 1 <= n && !visit[i + 1][j][sw]) {
            if (!arr[i + 1][j]) {
                q.push(make_pair(make_pair(i + 1, j), sw));
                visit[i + 1][j][sw] = cnt + 1;
            }
            else if (!sw) {
                q.push(make_pair(make_pair(i + 1, j), true));
                visit[i + 1][j][true] = cnt + 1;
            }
        }
        if (j - 1 > 0 && !visit[i][j - 1][sw]) {
            if (!arr[i][j - 1]) {
                q.push(make_pair(make_pair(i, j - 1), sw));
                visit[i][j - 1][sw] = cnt + 1;
            }
            else if (!sw) {
                q.push(make_pair(make_pair(i, j - 1), true));
                visit[i][j - 1][true] = cnt + 1;
            }
        }
        if (j + 1 <= m && !visit[i][j + 1][sw]) {
            if (!arr[i][j + 1]) {
                q.push(make_pair(make_pair(i, j + 1), sw));
                visit[i][j + 1][sw] = cnt + 1;
            }
            else if (!sw) {
                q.push(make_pair(make_pair(i, j + 1), true));
                visit[i][j + 1][true] = cnt + 1;
            }
        }
    }
    cout << answer;
    return 0;
}