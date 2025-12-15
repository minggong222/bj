#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#define ll long long
using namespace std;
int n;
int answer = 0;
int dp[100001];
int main() {
    cin >> n;
    for (int i = 1; i <= 100000; i++) {
        dp[i] = i;
    }
    for (int i = 2; i <= 317; i++) {
        int idx = 0;
        int x = i * i;
        for (int j = 0; j <= 100000; j++) {
            if (j + x > 100000)
                break;
            dp[j + x] = min(dp[j + x], dp[j] + 1);
        }
    }
    cout << dp[n];
    return 0;
}