#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int matrix[201][201];
int dij[201][201];
int answer[201][201];
bool visit[201][201];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        matrix[x][y] = z;
        matrix[y][x] = z;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dij[i][j] = 200000;
        }
    }
    for (int i = 1; i <= N; i++) {
        dij[i][i] = 0;
        visit[i][i] = true;
        int n = N;
        int idx = i;
        while (n--) {
            for (int j = 1; j <= N; j++) {
                if (matrix[idx][j]) {
                    if (dij[i][j] > dij[i][idx] + matrix[idx][j]) {
                        dij[i][j] = dij[i][idx] + matrix[idx][j];
                        if (answer[i][idx] == 0)
                            answer[i][j] = j;
                        else
                            answer[i][j] = answer[i][idx];
                    }
                }
            }
            int min = 200000;
            for (int j = 1; j <= N; j++) {
                if (!visit[i][j]) {
                    if (dij[i][j] < min) {
                        min = dij[i][j];
                        idx = j;
                    }
                }
            }
            visit[i][idx] = true;
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (answer[i][j])
                cout << answer[i][j] << ' ';
            else
                cout << "- ";
        }
        cout << '\n';
    }
    return 0;
}