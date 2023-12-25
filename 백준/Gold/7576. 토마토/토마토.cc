#include <iostream>
#include <queue>
using namespace std;
int arr[1000][1000];
int n, m, answer = 0;
queue<pair<int, int>> q;
void bfs() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x - 1 >= 0 && arr[x - 1][y] == 0) {
            q.push(make_pair(x - 1, y));
            arr[x - 1][y] = arr[x][y] + 1;
        }
        if (y - 1 >= 0 && arr[x][y - 1] == 0) {
            q.push(make_pair(x, y - 1));
            arr[x][y - 1] = arr[x][y] + 1;
        }
        if (x + 1 < n && arr[x + 1][y] == 0) {
            q.push(make_pair(x + 1, y));
            arr[x + 1][y] = arr[x][y] + 1;
        }
        if (y + 1 < m && arr[x][y + 1] == 0) {
            q.push(make_pair(x, y + 1));
            arr[x][y + 1] = arr[x][y] + 1;
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }
    bfs();
    int sw = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                sw = false;
                break;
            }
            answer = max(answer, arr[i][j]);
        }
    }
    if (sw)
        cout << answer - 1;
    else
        cout << -1;
    return 0;
}