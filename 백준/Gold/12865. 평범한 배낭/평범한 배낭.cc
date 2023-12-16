#include <iostream>
using namespace std;
int dp[101][100001];
int W[101];
int V[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> W[i] >> V[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j - W[i] >= 0)  dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k];
    return 0;
}