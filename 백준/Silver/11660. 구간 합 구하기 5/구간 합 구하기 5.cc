#include <iostream>
#include <vector>
using namespace std;
int mat[1025][1025];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            mat[i][j] = mat[i][j - 1] + x;
        }
    }
    for (int i = 0; i < m; i++) {
        int x, y, z, w, answer = 0;
        cin >> x >> y >> z >> w;
        for (int j = x; j <= z; j++) {
            answer += mat[j][w] - mat[j][y - 1];
        }
        cout << answer << '\n';
    }
    return 0;
}