#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF 1000000000
using namespace std;
int n;
ll dp[1 << 10][101][10];

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    
    for (int i = 1; i < 10; i++) {
        dp[1 << i][1][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int k = 0; k < 10; k++) {
            for (int bit = 0; bit < (1 << 10); bit++) {
                if (k == 0) {
                    dp[bit | (1 << k)][i][k] += dp[bit][i - 1][k + 1] % INF;
                }
                else if (k == 9) {
                    dp[bit | (1 << k)][i][k] += dp[bit][i - 1][k - 1] % INF;
                }
                else {
                    dp[bit | (1 << k)][i][k] += (dp[bit][i - 1][k + 1] + dp[bit][i - 1][k - 1]) % INF;
                }
            }
        }
    }

    long long answer = 0;

    for (int i = 0; i <= 9; i++) {
        answer = (answer + dp[(1 << 10) - 1][n][i]) % INF;
    }

    cout << answer << endl;

    return 0;
}