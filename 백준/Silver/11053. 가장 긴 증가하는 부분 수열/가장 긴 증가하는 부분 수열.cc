#include <iostream>
#include <algorithm>
using namespace std;
int n;
int answer[1001];
int dp[1001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> answer[i];
    }
    dp[1] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (answer[i] > answer[j]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    sort(dp + 1, dp + n + 1);
    cout << dp[n];
    return 0;
}