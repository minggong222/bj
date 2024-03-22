#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, m, answer = 987654321, sum = 0;
int arr[101];
int memory[101];
int dp[101][10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) {
        cin >> memory[i];
        sum += memory[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (j - memory[i] >= 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - memory[i]] + arr[i]);
            }
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }
    for (int i = 0; i <= sum; i++) {
        if (dp[n][i] >= m) {
            cout << i;
            break;
        }
    }
    return 0;
}