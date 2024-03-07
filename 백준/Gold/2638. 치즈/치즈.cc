#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, m, answer = 0;
int arr[102][102];

bool cheeze() {
    bool sw = false;
    int next[102][102];
    bool visit[102][102];
    memset(visit, false, sizeof(visit));
    copy(&arr[0][0], &arr[0][0] + 10404, &next[0][0]);
    queue<pair<int, int>> q;
    q.push(make_pair(1, 1));
    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        if (i - 1 > 0 && !visit[i - 1][j] && !next[i - 1][j]) {
            q.push(make_pair(i - 1, j));
            visit[i - 1][j] = true;
        }
        if (i + 1 <= n && !visit[i + 1][j] && !next[i + 1][j]) {
            q.push(make_pair(i + 1, j));
            visit[i + 1][j] = true;
        }
        if (j - 1 > 0 && !visit[i][j - 1] && !next[i][j - 1]) {
            q.push(make_pair(i, j - 1));
            visit[i][j - 1] = true;
        }
        if (j + 1 <= m && !visit[i][j + 1] && !next[i][j + 1]) {
            q.push(make_pair(i, j + 1));
            visit[i][j + 1] = true;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!next[i][j]) continue;
            int a = 0;
            sw = true;
            if (visit[i - 1][j]) a++;
            if (visit[i + 1][j]) a++;
            if (visit[i][j - 1]) a++;
            if (visit[i][j + 1]) a++;
            if (a >= 2)   arr[i][j] = 0;
        }
    }
    return sw;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    while (cheeze()) {
        answer++;
    }
    cout << answer;
    return 0;
}