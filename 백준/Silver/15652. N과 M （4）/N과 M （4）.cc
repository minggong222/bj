#include <iostream>
#include <vector>
using namespace std;
int n, m;
void dfs(int idx, vector<int> v, int x) {
    if (idx == 0) {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = x; i <= n; i++) {
        v.push_back(i);
        dfs(idx - 1, v, i);
        v.pop_back();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
        dfs(m - 1, v, i);
        v.pop_back();
    }
    return 0;
}