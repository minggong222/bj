#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;
int MAX = 0;
int parent[100001][20];
int depth[100001];
bool visit[100001];
vector<int> v[100001];
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
            parent[next][0] = cur;
            depth[next] = depth[cur] + 1;
            visit[next] = true;
            q.push(next);
        }
    }
    int temp = n, cnt = 0;
    while (temp > 1) {
        temp = temp >> 1;
        cnt++;
    }
    MAX = cnt;
    cin >> m;
    for (int k = 1; k <= MAX; k++) {
        for (int i = 2; i <= n; i++) {
            if (parent[i][k - 1] != 0)
                parent[i][k] = parent[parent[i][k - 1]][k - 1];
        }
    }
    while (m--) {
        int a, b;
        cin >> a >> b;
        if (depth[a] < depth[b] && depth[a] != depth[b])
            swap(a, b);
        int dif = depth[a] - depth[b];
        for (int i = 0; dif > 0; i++) {
            if (dif % 2 == 1)
                a = parent[a][i];
            dif = dif >> 1;
        }
        if (a != b) {
            for (int k = MAX; k >= 0; k--) {
                if (parent[a][k] != 0 && parent[a][k] != parent[b][k]) {
                    a = parent[a][k];
                    b = parent[b][k];
                }
            }
            a = parent[a][0];
        }
        cout << a << '\n';
    }
    return 0;
}