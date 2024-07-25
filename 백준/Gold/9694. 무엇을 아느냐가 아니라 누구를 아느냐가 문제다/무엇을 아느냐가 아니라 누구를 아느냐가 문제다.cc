#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define ll long long
#define INF 1234567890
using namespace std;
int T;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> T;
    int cnt = 1;
    while (cnt <= T) {
        vector<pair<int, int>> cur[20];
        int M, N;
        cin >> M >> N;
        for (int i = 0; i < M; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            cur[a].push_back({ b,c });
            cur[b].push_back({ a,c });
        }
        pair<int, int> ans[20];
        for (int i = 0; i < 20; i++) {
            ans[i] = { -1,INF };
        }
        priority_queue<pair<int, int>> pq;
        pq.push({ 0,0 });
        while (!pq.empty()) {
            int cost = -pq.top().first;
            int a = pq.top().second;
            pq.pop();
            if (cost > ans[a].second)   continue;
            for (int i = 0; i < cur[a].size(); i++) {
                int next = cur[a][i].first;
                int ncost = cur[a][i].second;
                if (cost + ncost >= ans[next].second)    continue;
                pq.push({ -(cost + ncost), next });
                ans[next] = { a, cost + ncost };
            }
        }
        cout << "Case #" << cnt++ << ": ";
        if (ans[N - 1].first == -1) {
           cout << -1 << '\n';
            continue;
        }
        vector<int> answer;
        answer.push_back(N - 1);
        while (answer.back() != 0) {
            answer.push_back(ans[answer.back()].first);
        }
        for (int i = answer.size() - 1; i >= 0; i--) {
            cout << answer[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}