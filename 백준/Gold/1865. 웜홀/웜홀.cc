#include <iostream>
#include <vector>
#define INF 50000000
using namespace std;
int tc;
int n, m, w;
int s, e, t;
vector<pair<pair<int, int>, int>> v;
bool bellmanFord() {
    int dist[501] = {INF,};
    dist[1] = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < v.size(); j++) {
            int from = v[j].first.first;
            int to = v[j].first.second;
            int cost = v[j].second;
            if (dist[to] > dist[from] + cost) {
                dist[to] = dist[from] + cost;
                if (i == n)   return true;
            }
        }
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> tc;
    while (tc--) {
        v.clear();
        bool sw = false;
        cin >> n >> m >> w;
        for (int i = 0; i < m; i++) {
            cin >> s >> e >> t;
            v.push_back(make_pair(make_pair(s, e), t));
            v.push_back(make_pair(make_pair(e, s), t));
        }
        for (int i = 0; i < w; i++) {
            cin >> s >> e >> t;
            v.push_back(make_pair(make_pair(s, e), -t));
        }
        for (int i = 1; i <= n; i++) {
            if (bellmanFord()) {
                sw = true;
                break;
            }
        }
        if (sw)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}