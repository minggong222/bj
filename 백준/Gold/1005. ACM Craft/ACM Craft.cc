#include <iostream>
#include <vector>
using namespace std;
int t;
int arr[1001];
bool visit[1001];

void dfs(int a, vector<int> v[1001]) {
    int M = 0;
    for (int i = 0; i < v[a].size(); i++) {
        if (!visit[v[a][i]])
            dfs(v[a][i], v);
        M = max(arr[v[a][i]], M);

    }
    arr[a] += M;
    visit[a] = true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--) {
        int n, k, w;
        vector<int> v[1001];
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            visit[i] = false;
        }
        for (int i = 1; i <= k; i++) {
            int x, y;
            cin >> x >> y;
            v[y].push_back(x);
        }
        cin >> w;
        dfs(w, v);
        cout << arr[w] << '\n';
    }
    return 0;
}