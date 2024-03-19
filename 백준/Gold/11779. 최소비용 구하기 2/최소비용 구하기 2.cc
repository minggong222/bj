#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;
int n, m;
int Start, End;
vector<pair<int, int>> v[1001];
void dij() {
    vector<int> answer;
    int route[1001];
    int dist[1001];
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
    }
    priority_queue<pair<int, int>> q;
    q.push(make_pair(0, Start));
    while (!q.empty()) {
        int cost = -q.top().first;
        int cur = q.top().second;
        q.pop();
        if (dist[cur] < cost)    continue;
        dist[cur] = cost;
        for (int i = 0; i < v[cur].size(); i++) {
            int next = v[cur][i].first;
            int ncost = cost + v[cur][i].second;
            if (dist[next] <= ncost) continue;
            dist[next] = ncost;
            route[next] = cur;
            q.push(make_pair(-ncost, next));
        }
    }
    answer.push_back(End);
    cout << dist[End] << '\n';
    while (answer.back() != Start) {
        answer.push_back(route[answer.back()]);
    }
    cout << answer.size() << '\n';
    for (int i = answer.size() - 1; i >= 0; i--) cout << answer[i] << ' ';
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
    }
    cin >> Start >> End;
    dij();
    return 0;
}