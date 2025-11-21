#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int dp[25];
int main() {
    int n, k, answer = 0;
    cin >> n >> k;
    dp[0] = n;
    while (1) {
        for (int i = 1; i < 25; i++) {
            n -= dp[i - 1] / 2;
            dp[i] += dp[i - 1] / 2;
            dp[i - 1] = dp[i - 1] % 2;
        }
        if (n <= k)
            break;
        answer++;
        n++;
        dp[0]++;
    }
    cout << answer;
    return 0;
}