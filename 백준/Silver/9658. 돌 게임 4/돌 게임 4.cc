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
    dp[1] = false;
    dp[2] = true;
    dp[3] = false;
    dp[4] = true;
    for (int i = 5; i <= n; i++) {
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