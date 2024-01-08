#include <iostream>

using namespace std;
int dp[2][3];
int dp2[2][3];
int arr[3];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> dp[0][i];
        dp[1][i] = dp[0][i];
    }
    for (int i = 1; i < n; i++) {
        cin >> arr[0] >> arr[1] >> arr[2];
        dp2[0][0] = arr[0] + max(dp[0][0], dp[0][1]);
        dp2[0][1] = arr[1] + max(dp[0][0], max(dp[0][1], dp[0][2]));
        dp2[0][2] = arr[2] + max(dp[0][1], dp[0][2]);
        dp2[1][0] = arr[0] + min(dp[1][0], dp[1][1]);
        dp2[1][1] = arr[1] + min(dp[1][0], min(dp[1][1], dp[1][2]));
        dp2[1][2] = arr[2] + min(dp[1][1], dp[1][2]);
        for (int j = 0; j < 3; j++) {
            dp[0][j] = dp2[0][j];
            dp[1][j] = dp2[1][j];
        }
    }
    cout << max(dp[0][2], max(dp[0][0], dp[0][1])) 
        << ' ' << min(dp[1][2], min(dp[1][0], dp[1][1]));
    return 0;
}