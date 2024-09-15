#include <iostream>
#define ll long long
using namespace std;
int n;
int arr[100000];
int dp[100000][2];
int ans = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] <= arr[i])
            dp[i + 1][0] = dp[i][0] + 1;
        if (arr[i + 1] >= arr[i])
            dp[i + 1][1] = dp[i][1] + 1;
        ans = max(ans, max(dp[i + 1][0], dp[i + 1][1]));
    }
    cout << ans+1;
    return 0;
}