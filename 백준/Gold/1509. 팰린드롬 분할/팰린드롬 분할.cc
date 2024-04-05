#include <iostream>
using namespace std;
string str;
bool arr[2501][2501];
int dp[2501];
int sz;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> str;
    sz = str.size();
    arr[sz][sz] = true;
    for (int i = 1; i < sz; i++) {
        arr[i][i] = true;
        if (str[i-1] == str[i])
            arr[i][i + 1] = true;
    }
    for (int j = 3; j <= sz; j++) {
        for (int i = 1; i < j - 1; i++) {
            if (str[i - 1] == str[j - 1] && arr[i + 1][j - 1])
                arr[i][j] = true;
        }
    }
    dp[1] = 1;
    for (int j = 2; j <= sz; j++) {
        int m = 2555;
        for (int i = j; i > 0; i--) {
            if (!arr[i][j])  continue;
            m = min(m, dp[i - 1] + 1);
        }
        dp[j] = min(dp[j - 1] + 1, m);
    }
    cout << dp[sz];
    return 0;
}