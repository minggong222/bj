#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, m, T;
int arr[101][101];
bool visit[101][101];
queue<pair<pair<int, int>, int>> q;
int answer = 1234567890;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m >> T;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    q.push({ { 1,1 }, 0 });
    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cost = q.front().second;
        q.pop();
        if (arr[x][y] == 2) {
            answer = min(answer, cost + (n - x + m - y));
            continue;
        }
        if (x == n && y == m) {
            answer = min(answer, cost);
        }
        if (cost == T) continue;
        if (x + 1 <= n && !visit[x + 1][y] && arr[x + 1][y] != 1) {
            visit[x + 1][y] = true;
            q.push({ {x + 1,y},cost + 1 });
        }
        if (x - 1 > 0 && !visit[x - 1][y] && arr[x - 1][y] != 1) {
            visit[x - 1][y] = true;
            q.push({ {x - 1,y},cost + 1 });
        }
        if (y + 1 <= m && !visit[x][y + 1] && arr[x][y + 1] != 1) {
            visit[x][y + 1] = true;
            q.push({ {x,y + 1},cost + 1 });
        }
        if (y - 1 > 0 && !visit[x][y - 1] && arr[x][y - 1] != 1) {
            visit[x][y - 1] = true;
            q.push({ {x,y - 1},cost + 1 });
        }

    }
    if (answer != 1234567890 && answer <= T) {
        cout << answer;
    }
    else {
        cout << "Fail";
    }
}