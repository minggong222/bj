#include <iostream>
#include <vector>
using namespace std;
int n, answer = 0;
vector<pair<int, int>> v[10001];
bool visit[10001];
int dfs(int x, int dist) {
    int result = dist;
    visit[x] = true;
    for (int i = 0; i < v[x].size(); i++) {
        int y = v[x][i].first;
        if (visit[y])    continue;
        result = max(result, dfs(y, dist + v[x][i].second));
    }
    visit[x] = false;
    return result;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
        v[b].push_back(make_pair(a, c));
    }
    for (int i = 1; i <= n; i++) {
        answer = max(answer, dfs(i, 0));
    }
    cout << answer;
    return 0;
}