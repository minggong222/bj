#include <iostream>
#include <vector>
using namespace std;
vector<int> v[201];
bool done[201];
int slt[201];
int n, m;
bool dfs(int x) {
    for (int i = 0; i < v[x].size(); i++) {
        int p = v[x][i];
        if (done[p]) continue;
        done[p] = true;
        if (slt[p] == 0 || dfs(slt[p])) {
            slt[p] = x;
            return true;
        }
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if ((a + b) % 2 == 1) {
            if (a % 2) {
                v[a].push_back(b);
            }
            else {
                v[b].push_back(a);
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        fill(done, done + 201, false);
        if (dfs(i)) cnt += 2;
    }
    if (cnt + 1 <= n)    cnt++;
    cout << cnt;
    return 0;
}