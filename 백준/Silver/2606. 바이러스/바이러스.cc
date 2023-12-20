#include <iostream>
#include <set>
using namespace std;
int arr[101][101];
int n, m;
set<int> s;
void dfs(int idx) {
    if (idx == 1)
        return;
    if (s.find(idx) == s.end()) {
        s.insert(idx);
    }
    for (int i = 1; i <= n; i++) {
        if (arr[idx][i]) {
            arr[idx][i]--;
            dfs(i);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y]++;
        arr[y][x]++;
    }
    for (int i = 1; i <= n; i++) {
        if (arr[1][i])
            dfs(i);
    }
    cout << s.size();
    return 0;
    }