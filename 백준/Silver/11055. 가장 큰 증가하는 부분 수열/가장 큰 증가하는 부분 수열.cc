#include <iostream>
#define ll long long
using namespace std;
int n;
int arr[1001];
int dp[1001];
int answer = 0;
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
    dp[1] = arr[1];
    for (int i = 1; i <= n; i++)
    {
        dp[i] = arr[i];
        for (int j = 1; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(arr[i] + dp[j], dp[i]);
            }
        }
        answer = max(answer, dp[i]);
    }
    cout << answer;
    return 0;
}