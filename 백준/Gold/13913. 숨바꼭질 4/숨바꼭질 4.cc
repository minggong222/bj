#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
bool visit[100001];
int memo[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    queue<pair<int, int>> q;
    cin >> n >> m;
    q.push(make_pair(n, 0));
    while (!q.empty()) {
        int x = q.front().first;
        int a = x * 2;
        int b = x + 1;
        int c = x - 1;
        int cnt = q.front().second;
        q.pop();
        if (x == m) {
            cout << cnt << '\n';
            vector<int> v;
            v.push_back(m);
            for (int i = 0; i < cnt; i++) {
                v.push_back(memo[v[i]]);
            }
            for (int i = v.size() - 1; i >= 0; i--)
                cout << v[i] << ' ';
            break;
        }
        if (a < 100001 && !visit[a]) {
            q.push(make_pair(a, cnt + 1));
            visit[a] = true;
            memo[a] = a / 2;
        }
        if (c >= 0 && !visit[c]) {
            q.push(make_pair(c, cnt + 1));
            visit[c] = true;
            memo[c] = c + 1;
        }
        if (b < 100001 && !visit[b]) {
            q.push(make_pair(b, cnt + 1));
            visit[b] = true;
            memo[b] = b - 1;
        }
    }
    return 0;
}