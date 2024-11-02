#include <iostream>
#define ll long long
using namespace std;
int dp[2000001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    n += 1000000;
    dp[1000000] = 0;
    dp[1000001] = 1;
    for (int i = 1000002; i <= 2000000; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000000;
    }
    for (int i = 999999; i >= 0; i--)
    {
        dp[i] = (dp[i + 2] - dp[i + 1]) % 1000000000;
    }
    if (dp[n] > 0)
        cout << "1\n";
    else if (dp[n] == 0)
        cout << "0\n";
    else
        cout << "-1\n";
    cout << abs(dp[n]) % 1000000000;
    return 0;
}