#include <iostream>
#include <vector>
using namespace std;
vector<int> v[201];
int slt[201];
bool done[201];
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
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        for (int j = 0; j < a; j++) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        fill(done, done + 201, false);
        if (dfs(i)) cnt++;
    }
    cout << cnt;
    return 0;
}