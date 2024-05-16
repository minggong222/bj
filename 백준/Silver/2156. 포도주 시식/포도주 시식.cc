#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[10001];
int dp[10001][3];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1][1] = arr[1];
    for (int i = 1; i <= n; i++) {
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        dp[i][1] = dp[i - 1][0] + arr[i];
        dp[i][2] = dp[i - 1][1] + arr[i];
    }
    cout << max(dp[n][0], max(dp[n][1], dp[n][2]));
}