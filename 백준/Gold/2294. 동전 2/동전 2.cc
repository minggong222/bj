#include <iostream>
#define ll long long
using namespace std;
int N, K;
int arr[101];
int dp[100001];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> N >> K;
    fill(dp, dp + 10001, 1234567890);
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        dp[x] = 1;
        for (int j = 0; j < x; j++) {
            for (int k = j + x; k <= K; k += x) {
                dp[k] = min(dp[k], dp[k - x] + 1);
            }
        }
    }
    if (dp[K] > 10000)
        dp[K] = -1;
    cout << dp[K];
}