#include <iostream>
#include <queue>
using namespace std;
int arr[100][100][100];
int n, m, h, answer = 0;
queue<pair<int, pair<int, int>>> q;
void bfs() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second.first;
        int z = q.front().second.second;
        q.pop();
        if (x - 1 >= 0 && arr[x - 1][y][z] == 0) {
            q.push(make_pair(x - 1, make_pair(y, z)));
            arr[x - 1][y][z] = arr[x][y][z] + 1;
        }
        if (y - 1 >= 0 && arr[x][y - 1][z] == 0) {
            q.push(make_pair(x, make_pair(y - 1, z)));
            arr[x][y - 1][z] = arr[x][y][z] + 1;
        }
        if (z - 1 >= 0 && arr[x][y][z - 1] == 0) {
            q.push(make_pair(x, make_pair(y, z - 1)));
            arr[x][y][z - 1] = arr[x][y][z] + 1;
        }
        if (x + 1 < h && arr[x + 1][y][z] == 0) {
            q.push(make_pair(x + 1, make_pair(y, z)));
            arr[x + 1][y][z] = arr[x][y][z] + 1;
        }
        if (y + 1 < n && arr[x][y + 1][z] == 0) {
            q.push(make_pair(x, make_pair(y + 1, z)));
            arr[x][y + 1][z] = arr[x][y][z] + 1;
        }
        if (z + 1 < m && arr[x][y][z + 1] == 0) {
            q.push(make_pair(x, make_pair(y, z + 1)));
            arr[x][y][z + 1] = arr[x][y][z] + 1;
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> m >> n >> h;
   for(int i = 0; i < h; i++)
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < m; k++) {
            cin >> arr[i][j][k];
            if (arr[i][j][k] == 1)
                q.push(make_pair(i, make_pair(j, k)));
        }
    }
    bfs();
    int sw = true;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j <n; j++) {
            for (int k = 0; k < m; k++) {
                if (arr[i][j][k] == 0) {
                    sw = false;
                    break;
                }
                answer = max(answer, arr[i][j][k]);
            }
        }
    }
    if (sw)
        cout << answer - 1;
    else
        cout << -1;
    return 0;
}