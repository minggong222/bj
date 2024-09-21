#include <iostream>
#define ll long long
using namespace std;
int n;
pair<int, int> dp[1000001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int idx = i + 1;
        if (idx <= n && (dp[idx].first == 0 || dp[idx].first > dp[i].first + 1))
            dp[idx] = {dp[i].first + 1, i};

        idx = i * 2;
        if (idx <= n && (dp[idx].first == 0 || dp[idx].first > dp[i].first + 1))
            dp[idx] = {dp[i].first + 1, i};

        idx = i * 3;
        if (idx <= n && (dp[idx].first == 0 || dp[idx].first > dp[i].first + 1))
            dp[idx] = {dp[i].first + 1, i};
    }
    cout << dp[n].first << '\n';
    while(n){
        cout << n << ' ';
        n = dp[n].second;
    }
    return 0;
}