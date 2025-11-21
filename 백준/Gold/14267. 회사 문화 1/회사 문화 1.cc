#include<iostream>
#include<queue>
#include<vector>
#include <cstring>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int p[100001], dp[100001] = { 0, };
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        dp[a] += b;
    }
    cout << dp[1] << ' ';
    for (int i = 2; i <= n; i++) {
        dp[i] += dp[p[i]];
        cout << dp[i] << ' ';
    }
    return 0;
}