#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, k;
int dp[100001];
int arr[100001];
int answer = 0;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[i] = dp[i - 1] + arr[i];
    }
    for (int i = 2; i < n; i++) {
        answer = max(answer,max(max(dp[n] * 2 - arr[1] - arr[i] - dp[i], dp[n] - arr[n] - arr[i] + dp[i - 1]), (dp[n] - arr[1] - arr[n] + arr[i])));
    }
    cout << answer;
}