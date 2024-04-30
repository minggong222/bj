#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n;
vector<pair<int, int>> v[40001];
int depth[40001];
int parent[40001];
int dis[40001];
bool visit[40001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    for (int i = 1; i <= n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({ b,c });
        v[b].push_back({ a,c });
    }
    queue<int> q;
    q.push(1);
    visit[1] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < v[cur].size(); i++) {
            int next = v[cur][i].first;
            int cost = v[cur][i].second;
            if (visit[next]) continue;
            depth[next] = depth[cur] + 1;
            visit[next] = true;
            parent[next] = cur;
            dis[next] = dis[cur] + cost;
            q.push(next);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int x = dis[a];
        int y = dis[b];
        if (depth[a] > depth[b])
            swap(a, b);
        while (depth[a] != depth[b])
            b = parent[b];
        while (a != b) {
            a = parent[a];
            b = parent[b];
        }
        cout << x + y - 2 * dis[a] << '\n';
    }
    return 0;
}