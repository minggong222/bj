#include <iostream>
#include <algorithm>
using namespace std;
int n;
bool dp[1001];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;
    dp[5] = true;
    for (int i = 6; i <= n; i++) {
        if (dp[i - 1] && dp[i - 3] && dp[i - 4])
            dp[i] = false;
        else
            dp[i] = true;
    }
    if (dp[n]) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
}