#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF 1000000007
using namespace std;
int n;
int arr[16][16];
int dp[16][1 << 16];
int dfs(int cur, int visit) {
    if (visit == (1 << n) - 1) {
        if (arr[cur][0] == 0)
            return INF;
        return arr[cur][0];
    }
    if (dp[cur][visit] != -1)
        return dp[cur][visit];

    dp[cur][visit] = INF;

    for (int i = 0; i < n; i++) {
        if (arr[cur][i] == 0)
            continue;
        if ((visit & (1 << i)) == (1 << i))
            continue;
        dp[cur][visit] = min(dp[cur][visit], arr[cur][i] + dfs(i, visit | 1 << i));
    }

    return dp[cur][visit];
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    cout << dfs(0, 1);
    return 0;
}