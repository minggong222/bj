#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int n, m;
    int dp[31][31];
    cin >> n >> m;
    for (int i = 1; i <= 30; i++) {
        dp[i][1] = 1;
        dp[i][i] = 1;
        for (int j = 2; j < i; j++) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    cout << dp[n][m];
    return 0;
}