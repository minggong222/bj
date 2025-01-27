#include <iostream>
#define ll long long
using namespace std;
int n, answer = 0;
int dp[1001][10];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i <= 9; i++)
        dp[1][i]++;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                dp[i + 1][j] += dp[i][k];
                dp[i + 1][j] %= 10007;
            }
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        answer += dp[n][i];
        answer %= 10007;
    }
    cout << answer;
    return 0;
}