#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
int t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--) {
        int n;
        int arr[10001];
        int depth[10001];
        vector<int> v[10001];
        memset(arr, 0, sizeof(arr));
        memset(depth, 0, sizeof(depth));
        cin >> n;
        for (int i = 1; i < n; i++) {
            int a, b;
            cin >> a >> b;
            arr[b] = a;
            v[a].push_back(b);
        }
        int root;
        for (int i = 1; i <= n; i++) {
            if (arr[i])   continue;
            root = i;
            break;
        }
        queue<int> q;
        q.push(root);
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (int i = 0; i < v[cur].size(); i++) {
                int next = v[cur][i];
                depth[next] = depth[cur] + 1;
                q.push(next);
            }
        }
        int a, b;
        cin >> a >> b;
        if (depth[a] > depth[b]) {
            swap(a, b);
        }
        while (depth[a] != depth[b])
            b = arr[b];
        while (a != b) {
            a = arr[a];
            b = arr[b];
        }
        cout << a << '\n';
    }
    return 0;
}