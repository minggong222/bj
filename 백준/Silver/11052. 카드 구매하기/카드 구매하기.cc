#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
int n;
int arr[1001];
int dp[1001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j + i <= n; j++)
        {
            dp[i + j] = max(dp[i + j], dp[j] + arr[i]);
        }
    }
    cout << dp[n];
    return 0;
}