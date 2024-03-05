#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int, int>> v[801];
int n, e, v1, v2;
void dij(int start, int *dist) {
    priority_queue<pair<int, int>> pq;
    for (int i = 1; i <= n; i++) {
        dist[i] = 200000000;
    }
    pq.push(make_pair(0, start));
    while (!pq.empty()) {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        if (dist[cur] < cost)    continue;
        dist[cur] = cost;
        for (int i = 0; i < v[cur].size(); i++) {
            int ncost = cost + v[cur][i].second;
            int next = v[cur][i].first;
            if (dist[next] > ncost) {
                dist[next] = ncost;
                pq.push(make_pair(-ncost, next));
            }
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> e;
    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
        v[b].push_back(make_pair(a, c));
    }
    cin >> v1 >> v2;
    int dist1[801];
    int dist2[801];
    int dist3[801];
    dij(1, dist1);
    dij(v1, dist2);
    dij(v2, dist3);
    int a = dist1[v1] + dist2[v2] + dist3[n];
    int b = dist1[v2] + dist3[v1] + dist2[n];
    if (a >= 200000000 && b >= 200000000) {
        cout << -1;
    }
    else {
        cout << min(a, b);
    }
    return 0;
}