#include <iostream>
#include <vector>
#include <queue>
#define INF 123456789
using namespace std;
int n, m;
int parent[100001][20];
int maxArr[100001][20];
int minArr[100001][20];
int depth[100001];
bool visit[100001];
vector<pair<int, int>> v[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i < n; i++) {
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
            q.push(next);
            parent[next][0] = cur;
            depth[next] = depth[cur] + 1;
            maxArr[next][0] = cost;
            minArr[next][0] = cost;
            visit[next] = true;
        }
    }
    int DEPTH = 0;
    int temp = n;
    while (temp > 1) {
        temp = temp >> 1;
        DEPTH++;
    }
    for (int i = 1; i <= DEPTH; i++) {
        for (int j = 1; j <= n; j++) {
            parent[j][i] = parent[parent[j][i - 1]][i - 1];
            maxArr[j][i] = max(maxArr[j][i - 1], maxArr[parent[j][i - 1]][i - 1]);
            minArr[j][i] = min(minArr[j][i - 1], minArr[parent[j][i - 1]][i - 1]);
        }
    }
    cin >> m;
    while (m--) {
        int a, b, Max = 0, Min = INF;
        cin >> a >> b;
        if (depth[a] > depth[b])
            swap(a, b);
        int dif = depth[b] - depth[a];
        if (depth[a] != depth[b]) {
            for (int i = 0; dif > 0; i++) {
                if (dif % 2 == 1) {
                    Max = max(Max, maxArr[b][i]);
                    Min = min(Min, minArr[b][i]);
                    b = parent[b][i];
                }
                dif = dif >> 1;
            }
        }
        if (a != b) {
            for (int i = DEPTH; i >= 0; i--) {
                if (parent[a][i] != parent[b][i]) {
                    Max = max(Max, maxArr[a][i]);
                    Min = min(Min, minArr[a][i]);
                    Max = max(Max, maxArr[b][i]);
                    Min = min(Min, minArr[b][i]);
                    a = parent[a][i];
                    b = parent[b][i];
                }
            }
            Max = max(Max, maxArr[a][0]);
            Min = min(Min, minArr[a][0]);
            Max = max(Max, maxArr[b][0]);
            Min = min(Min, minArr[b][0]);
        }
        cout << Min << ' ' << Max << '\n';
    }
    return 0;
}