#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, k;
int dp[31][1001];
int arr[1001];
int answer = 0;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[0][i] = dp[0][i - 1];
        if (arr[i] == 1) {
            dp[0][i]++;
        }
    }
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[j]%2 == (i + 1) % 2) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1] + 1);
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[k][n];
}