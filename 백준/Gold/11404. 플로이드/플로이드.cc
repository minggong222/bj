#include <iostream>
#define INF 987654321
using namespace std;
int dis[101][101];
int N, M;
int a, b, c;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == j)
                dis[i][j] = 0;
            else
                dis[i][j] = INF;
        }
    }
    for (int i = 1; i <= M; i++) {
        cin >> a >> b >> c;
        dis[a][b] = min(dis[a][b], c);
    }
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (dis[i][j] == INF) {
                cout << 0 << ' ';
                continue;
            }
            cout << dis[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}