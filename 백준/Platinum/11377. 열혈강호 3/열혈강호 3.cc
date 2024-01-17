#include <iostream>
#include <vector>
using namespace std;
vector<int> v[1001];
int slt[1001];
bool done[1001];
int n, m, k;
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
    cin >> n >> m >> k;
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
    int cnt2 = 0;
    for (int i = 1; i <= n; i++) {
        fill(done, done + 1001, false);
        if (dfs(i)) cnt++;
    }
    for (int i = 1; i <= n; i++) {
        fill(done, done + 1001, false);
        if (dfs(i)) cnt2++;
    }
    cout << min(min(cnt + cnt2, cnt + k), m);
    return 0;
}