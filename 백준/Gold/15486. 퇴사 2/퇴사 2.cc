#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define ll long long
using namespace std;
int n;
int arr[1500001][2];
int dp[1500001];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    int answer = 0;
    for (int i = 1; i <= n + 1; i++) {
        answer = max(answer, dp[i]);
        if (i + arr[i][0] > n + 1) {
            continue;
        }
        dp[i + arr[i][0]] = max(dp[i + arr[i][0]], answer + arr[i][1]);
    }
    cout << answer;
    return 0;
}