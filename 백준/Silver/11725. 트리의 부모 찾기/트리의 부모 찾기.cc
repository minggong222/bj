#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int> > v(100001);
bool visit[100001];
int answer[100001];
queue<int> q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    q.push(1);
    while (!q.empty()) {
        int x = q.front();
        visit[x] = true;
        for (int i = 0; i < v[x].size(); i++) {
            if (!visit[v[x][i]]) {
                answer[v[x][i]] = x;
                q.push(v[x][i]);
            }
        }
        q.pop();
    }
    for (int i = 2; i <= n; i++) {
        cout << answer[i] << '\n';
    }
    return 0;
}