#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    int dp[10001] = { 1, };
    for (int i = 1; i <= 10000; i++) {
        dp[i] += 1;
    }
    for (int i = 2; i <= 10000; i++) {
        dp[i] += dp[i - 2];
    }
    for (int i = 3; i <= 10000; i++) {
        dp[i] += dp[i - 3];
    }
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}