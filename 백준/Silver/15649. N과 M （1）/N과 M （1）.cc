#include <iostream>
#include <vector>
using namespace std;
bool visit[9];
int n, m;
void dfs(int idx, vector<int> v) {
    if (idx == 0) {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!visit[i]) {
            v.push_back(i);
            visit[i] = true;
            dfs(idx - 1, v);
            v.pop_back();
            visit[i] = false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        visit[i] = true;
        v.push_back(i);
        dfs(m - 1, v);
        visit[i] = false;
        v.pop_back();
    }
    return 0;
}