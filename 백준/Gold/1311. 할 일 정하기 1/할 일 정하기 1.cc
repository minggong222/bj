#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF 1000000000
using namespace std;
int n;
int arr[20][20];
int dp[20][1 << 20];
int dfs(int cur, int visit) {
    if (visit == (1 << n) - 1) {
        return 0;
    }
    
    if (dp[cur][visit] != -1)
        return dp[cur][visit];

    dp[cur][visit] = INF;
    for (int i = 0; i < n; i++) {
        if ((visit & (1 << i)) == (1 << i))
            continue;
        dp[cur][visit] = min(dp[cur][visit], arr[cur][i] + dfs(cur + 1, visit | (1 << i)));
    }
    return dp[cur][visit];

}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << dfs(0, 0);
    return 0;
}