#include <iostream>
#define MAX 1000 * 1000 + 1
using namespace std;
int n;
int arr[1001][3];
int answer = MAX;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    for (int start = 0; start <= 2; start++) {
        int dp[1001][3];
        for (int i = 0; i <= 2; i++) {
            if (i == start)     dp[1][start] = arr[1][start];
            else    dp[1][i] = MAX;
        }
        for (int i = 2; i <= n; i++) {
            dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
        }
        for (int end = 0; end <= 2; end++) {
            if (end == start) continue;
            answer = min(answer, dp[n][end]);
        }
    }
    cout << answer;
    return 0;
}