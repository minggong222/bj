#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, m, answer = 0;
vector<int> v[1000002];
bool visit[1000002];
int dp[1000002][2];
void find(int x) {
    visit[x] = true;
    dp[x][0] = 1;
    for (int i = 0; i < v[x].size(); i++) {
        int child = v[x][i];
        if (visit[child])    continue;
        find(child);
        dp[x][1] += dp[child][0];
        dp[x][0] += min(dp[child][1], dp[child][0]);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    find(1);
    cout << min(dp[1][0], dp[1][1]);
    return 0;
}