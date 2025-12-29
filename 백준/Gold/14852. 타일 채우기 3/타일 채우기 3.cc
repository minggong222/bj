#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
ll dp[1000001];
ll sum[1000001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 7;
    dp[3] = 22;
    sum[0] = 1;
    for (int i = 4; i <= 1000000; i++) {
        dp[i] += dp[i - 1] * 2;
        dp[i] %= 1000000007;
        dp[i] += dp[i - 2] * 3;
        dp[i] %= 1000000007;
        sum[i-3] = sum[i-4] + dp[i - 3];
        sum[i-3] %= 1000000007;
        dp[i] += sum[i - 3] * 2;
        dp[i] %= 1000000007;

    }
    cout << dp[t] % 1000000007;
    return 0;
}