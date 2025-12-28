#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
int dp[1001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 5;
    for (int i = 3; i <= 1000; i++) {
        dp[i] += dp[i - 1] + dp[i - 2] * 4;
        for (int j = i - 3; j >= 0; j--) {
            if ((i - j) % 2) dp[i] += 2 * dp[j];
            else dp[i] += 3 * dp[j];
        }
    }
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}