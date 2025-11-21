#include<iostream>
#include<queue>
#include<vector>
#include <cstring>
using namespace std;
int n, m;
vector<pair<int, int>> v[1001];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n-1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({ b,c });
        v[b].push_back({ a,c });
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        bool visit[1001];
        memset(visit, false, 1001 * sizeof(bool));
        cin >> a >> b;
        queue<pair<int,int>> q;
        q.push({ a,0 });
        while (!q.empty()) {
            int x = q.front().first;
            int c = q.front().second;
            q.pop();
            if (x == b) {
                cout << c << '\n';
                break;
            }
            visit[x] = true;
            for (int i = 0; i < v[x].size(); i++) {
                if (visit[v[x][i].first])    continue;
                q.push({ v[x][i].first, c + v[x][i].second });
            }
        }
    }
    return 0;
}