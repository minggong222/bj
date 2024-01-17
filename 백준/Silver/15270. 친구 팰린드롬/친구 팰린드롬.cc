#include <iostream>
#include <vector>
using namespace std;
vector<int> v[21];
bool done[21];
int slt[21];
int n, m, answer = 0;
void dfs(int x) {
    bool sw = true;
    if (x == n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (done[i])    cnt++;
        }
        answer = max(answer, cnt);
        return;
    }
    if (done[x]) {
        dfs(x + 1);
        return;
    }
    for (int i = 0; i < v[x].size(); i++) {
        if (done[v[x][i]])  continue;
        sw = false;
        done[x] = true;
        done[v[x][i]] = true;
        dfs(x + 1);
        done[x] = false;
        done[v[x][i]] = false;
    }
    if (sw) {
        done[x] = false;
        dfs(x + 1);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int cnt = 0;
    dfs(1);
    if (answer + 1 <= n) answer++;
    cout << answer;
    return 0;
}