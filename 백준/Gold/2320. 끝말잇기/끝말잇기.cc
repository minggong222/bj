#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF 1000000000
using namespace std;
int n;
string arr[16];
int dp[16][1 << 16];
int dfs(int cur, int visit, int len) {
    if (dp[cur][visit] != -1) return dp[cur][visit];
    for (int i = 0; i < n; i++) {
        if (visit & (1 << i))  continue;
        if (arr[cur].back() != arr[i].front())   continue;
        dp[cur][visit] = max(dp[cur][visit], dfs(i, visit | (1 << i), len + arr[i].size()));
    }
    return max(dp[cur][visit],len);
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int answer = 0;
    for (int i = 0; i < n; i++) {
        answer = max(answer,dfs(i, (1 << i),arr[i].size()));
    }
    cout << answer;
    return 0;
}