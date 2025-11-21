#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int dp[100001];
int main() {
    int n;
    cin >> n;
    dp[2] = 1;
    dp[4] = 2;
    dp[5] = 1;
    for (int i = 6; i <= 100000; i++) {
        if (dp[i - 2] != 0 && dp[i - 5] != 0)
            dp[i] = min(dp[i - 2] + 1, dp[i - 5] + 1);
        else if (dp[i - 2] == 0)
            dp[i] = dp[i - 5] + 1;
        else
            dp[i] = dp[i - 2] + 1;
    }
    if (dp[n] == 0)
        cout << -1;
    else
        cout << dp[n];
    return 0;
}