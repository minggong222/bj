#include <iostream>
#include <queue>
using namespace std;
int n, ss = 2, st = -1, answer = 0;
int sx = 0, sy = 0;
int cn = 0;
int arr[21][21];
bool bfs() {
    bool sw = false;
    bool visit[21][21] = { 0 };
    queue<pair<int, pair<int, int>>> q;
    arr[sx][sy] = 0;
    visit[sx][sy] = true;
    q.push(make_pair(answer, make_pair(sx, sy)));
    sx = 20;
    sy = 20;
    while (!q.empty()) {
        int x = q.front().second.first;
        int y = q.front().second.second;
        int cnt = q.front().first + 1;
        q.pop();
        if (cn < cnt - 1)    break;
        if (x > sx || (x == sx && y > sy))   continue;
        if (arr[x][y] && arr[x][y] < ss) {
            sw = true;
            sx = x;
            sy = y;
            cn = cnt - 1;
            continue;
        }
        if (x - 1 > 0 && arr[x - 1][y] <= ss && !visit[x - 1][y]) {
            if (x - 1 < sx || (x - 1 == sx && y < sy))
                q.push(make_pair(cnt, make_pair(x - 1, y)));

            visit[x - 1][y] = true;
        }
        if (y - 1 > 0 && arr[x][y - 1] <= ss && !visit[x][y - 1]) {
            if (x < sx || (x == sx && y - 1 < sy))
                q.push(make_pair(cnt, make_pair(x, y - 1)));
            visit[x][y - 1] = true;
        }
        if (y + 1 <= n && arr[x][y + 1] <= ss && !visit[x][y + 1]) {
            if (x < sx || (x == sx && y + 1 < sy))
                q.push(make_pair(cnt, make_pair(x, y + 1)));
            visit[x][y + 1] = true;
        }
        if (x + 1 <= n && arr[x + 1][y] <= ss && !visit[x + 1][y]) {
            if (x + 1 < sx || (x + 1 == sx && y < sy))
                q.push(make_pair(cnt, make_pair(x + 1, y)));
            visit[x + 1][y] = true;
        }
    }
    return sw;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 9) {
                sx = i;
                sy = j;
            }
        }
    }
    while (1) {
        answer = cn;
        cn = 444;
        st++;
        arr[sx][sy] = 9;
        if (ss <= 6 && ss == st) {
            ss++;
            st = 0;
        }
        if (!bfs())    break;
    }
    cout << answer;
    return 0;
}