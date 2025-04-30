#include <iostream>
#define ll long long
using namespace std;
ll dp[1000001];
int n;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    cin >> n;

    for (int i = 4; i <= 1000000; i++)
    {
        dp[i] += dp[i - 1];
        dp[i] = dp[i] % 1000000009;
        dp[i] += dp[i - 2];
        dp[i] = dp[i] % 1000000009;
        dp[i] += dp[i - 3];
        dp[i] = dp[i] % 1000000009;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << dp[x] << '\n';
    }
}