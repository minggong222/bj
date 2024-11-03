#include <iostream>
#define ll long long
using namespace std;
ll dp[1001][1001];
int n, m;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    dp[0][0] = 1;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + dp[i - 1][j - 1];
            dp[i][j] %= 1000000007;
        }
    }
    cout << dp[n][m];
    return 0;
}