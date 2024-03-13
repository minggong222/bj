#include <iostream>
#include <vector>
using namespace std;
int n, answer = 0, Next = 0;
vector<pair<int, int>> v[100001];
bool visit[100001];
int dfs(int x, int dist) {
    int result = dist;
    bool sw = true;
    visit[x] = true;
    for (int i = 0; i < v[x].size(); i++) {
        int y = v[x][i].first;
        if (visit[y])    continue;
        sw = false;
        result = max(result, dfs(y, dist + v[x][i].second));
    }
    visit[x] = false;
    if (sw && answer < result) {
        Next = x;
        answer = result;
    }
    return result;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        while (1) {
            int a, b;
            cin >> a;
            if (a == -1) break;
            cin >> b;
            v[x].push_back(make_pair(a, b));
        }
    }
    dfs(1, 0);
    cout << dfs(Next, 0);
    return 0;
}