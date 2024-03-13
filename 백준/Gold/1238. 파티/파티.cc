#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;
int n, m, x, ans = 0;
vector<pair<int, int>> v[1001];
int dist[1001];
int answer[1001];
void dij(int start) {
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
    }
    dist[start] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, start));
    while (!pq.empty()) {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        if (dist[cur] < cost)    continue;
        for (int i = 0; i < v[cur].size(); i++) {
            int ncost = cost + v[cur][i].second;
            int next = v[cur][i].first;
            if (dist[next] < ncost)  continue;
            dist[next] = ncost;
            pq.push(make_pair(-ncost, next));
        }
    }
    answer[start] = dist[x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> x;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
    }
    for (int i = 1; i <= n; i++) {
        dij(i);
    }
    dij(x);
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dist[i] + answer[i]);
    }
    cout << ans;
    return 0;
}