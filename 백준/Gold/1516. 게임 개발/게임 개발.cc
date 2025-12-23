#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int n;
int dp[501];
int arr[501];
vector<int> v[501];
int t(int idx) {
    int time = 0;
    for (int i = 0; i < v[idx].size(); i++) {
        if (dp[v[idx][i]] == 0) {
            dp[v[idx][i]] = t(v[idx][i]);
        }
        time = max(time, dp[v[idx][i]]);
    }
    dp[idx] = time + arr[idx];
    return dp[idx];
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> arr[i];
        cin >> x;
        while (x != -1) {
            v[i].push_back(x);
            cin >> x;
        }
    }
    for (int i = 1; i <= n; i++) {
        t(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << dp[i] << '\n';
    }
    return 0;
}