#include <iostream>
#define INF 2147483647;
using namespace std;
int n;
pair<int, int> arr[501];
int dp[501][501];
pair<int, int> dp_arr[501][501];
int Sum(int x, int y, int mid) {
    return dp_arr[x][mid].first * dp_arr[x][mid].second * dp_arr[mid + 1][y].second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].first >> arr[i].second;
        dp_arr[i][i] = arr[i];
    }
    for (int i = 1; i < n; i++) {
        for (int x = 1; x + i <= n; x++) {
            int y = x + i;
            dp[x][y] = INF;
            for (int mid = x; mid < y; mid++) {
                dp[x][y] = min(dp[x][y], dp[x][mid] + dp[mid + 1][y] + Sum(x, y, mid));
            }
            dp_arr[x][y].first = arr[x].first;
            dp_arr[x][y].second = arr[y].second;
        }
    }
    cout << dp[1][n];
    return 0;
}