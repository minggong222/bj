#include <iostream>
#define ll long long
using namespace std;
ll n;
ll dp[91][2];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }
    cout << dp[n][0] + dp[n][1];

}