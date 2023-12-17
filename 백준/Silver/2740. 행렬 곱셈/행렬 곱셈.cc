#include <iostream>
using namespace std;
int mat1[101][101], mat2[101][101], answer[101][101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mat1[i][j];
        }
    }
    cin >> m >> k;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= k; j++) {
            cin >> mat2[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            for (int x = 1; x <= m; x++) {
                answer[i][j] += mat1[i][x] * mat2[x][j];
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            cout << answer[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}