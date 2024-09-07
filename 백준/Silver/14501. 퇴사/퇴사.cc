#include <iostream>
#define ll long long
using namespace std;
int n;
int Arr[16][2];
int dp[16];
int answer = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> Arr[i][0] >> Arr[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        int idx = i + Arr[i][0];
        if (idx > n)
            continue;
        for (int j = idx; j <= n; j++)
        {
            dp[j] = max(dp[j], dp[i] + Arr[i][1]);
        }
    }
    cout << dp[n];
    return 0;
}