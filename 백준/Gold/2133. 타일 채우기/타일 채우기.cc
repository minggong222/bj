#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
int dp[31];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 3;
    for (int i = 4; i <= 30; i+=2) {
        dp[i] += dp[i - 2] * 3;
        for (int j = i - 4; j >= 0; j -= 2) {
            dp[i] += dp[j] * 2;
        }
    }
    cout << dp[t];
    return 0;
}