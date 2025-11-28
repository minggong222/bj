#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define ll long long
using namespace std;
int n;
int arr[51];
int dp[51][500001];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[n][0] = -1;
    for (int i = 1; i <= n; i++) {
        dp[i][arr[i]] = arr[i];
        for (int j = 0; j <= 500000; j++) {
            if (!dp[i - 1][j]) continue;
            dp[i][j] = max(dp[i - 1][j], dp[i][j]);
            if (j - arr[i] < 0)     dp[i][abs(j - arr[i])] = max(dp[i - 1][j] + abs(j - arr[i]), dp[i][abs(j - arr[i])]);
            else    dp[i][j - arr[i]] = max(dp[i - 1][j], dp[i][j - arr[i]]);
            if (j + arr[i] <= 500000)  dp[i][j + arr[i]] = max(dp[i - 1][j] + arr[i], dp[i][j + arr[i]]);
        }
    }
    cout << dp[n][0];
    return 0;
}