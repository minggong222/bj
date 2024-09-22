#include <iostream>
#define ll long long
using namespace std;
int n,m;
int dp[1001][1001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n>>m;
    for(int i = 1; i <= 1000; i++){
        dp[i][0] = 1;
        dp[i][i] = 1;
        for(int j = 1; j < i; j++){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            dp[i][j] %= 10007;
        }
    }
    cout << dp[n][m];
    return 0;
}