#include <iostream>
#include <set>
using namespace std;
int n, x, y, z, answer = 0;
bool grid[50][50], baechu[50][50];
bool dfs(int i, int j) {
    if (!baechu[i][j])  return false;
    if (grid[i][j])   return false;
    grid[i][j] = true;
    if (i - 1 >= 0)     dfs(i - 1, j);
    if (i + 1 < x)     dfs(i + 1, j);
    if (j - 1 >= 0)     dfs(i, j - 1);
    if (j + 1 < y)     dfs(i, j + 1);
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        answer = 0;
        cin >> x >> y >> z;
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < y; k++) {
                grid[j][k] = false;
                baechu[j][k] = false;
            }
        }
        for (int j = 0; j < z; j++) {
            int a, b;
            cin >> a >> b;
            baechu[a][b] = true;
        }
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < y; k++) {
                    if (dfs(j, k)) answer++;
            }
        }
        cout << answer << '\n';
    }
}