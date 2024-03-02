#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int v, e, k;
vector<pair<int, int>> V[20001];
priority_queue<pair<int, int>> pq;
int dist[20001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> v >> e >> k;
    for (int i = 1; i <= e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        V[a].push_back(make_pair(b, c));
    }
    for (int i = 1; i <= v; i++) {
        dist[i] = 200000;
    }
    pq.push(make_pair(0, k));
    while (!pq.empty()) {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        if (dist[cur] > cost) {
            dist[cur] = cost;
            for (int i = 0; i < V[cur].size(); i++) {
                pq.push(make_pair(-V[cur][i].second - cost, V[cur][i].first));
            }
        }
    }
    for (int i = 1; i <= v; i++) {
        if (dist[i] == 200000) {
            cout << "INF\n";
        }
        else {
            cout << dist[i] << '\n';
        }
    }
    return 0;
};