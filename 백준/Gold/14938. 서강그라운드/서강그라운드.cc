#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;
int n, m, r, answer = 0;
int arr[101];
int mat[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> r;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            mat[i][j] = INF;
        }
        mat[i][i] = 0;
    }
    for (int i = 0; i < r; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        mat[a][b] = min(mat[a][b], c);
        mat[b][a] = min(mat[b][a], c);
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (mat[i][j] > m)   continue;
            cnt += arr[j];
        }
        answer = max(answer, cnt);
    }
    cout << answer;
    return 0;
}