#include <iostream>
#define ll long long
using namespace std;
ll dp[46];
int n;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= 45; i++)
        dp[i] = dp[i - 2] + dp[i - 1];
    cin >> n;
    cout << dp[n];
    return 0;
}