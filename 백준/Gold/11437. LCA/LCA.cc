#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;
int parent[50001];
int depth[50001];
bool visit[50001];
vector<int> v[50001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    visit[1] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < v[cur].size(); i++) {
            int next = v[cur][i];
            if (visit[next]) continue;
            parent[next] = cur;
            depth[next] = depth[cur] + 1;
            visit[next] = true;
            q.push(next);
        }
    }
    cin >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        if (depth[a] > depth[b])
            swap(a, b);
        while (depth[a] != depth[b])
            b = parent[b];
        while (a != b) {
            a = parent[a];
            b = parent[b];
        }
        cout << a << '\n';
    }
    return 0;
}