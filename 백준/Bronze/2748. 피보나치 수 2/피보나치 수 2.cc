#include <iostream>
#define ll long long
using namespace std;
int n;
ll dp[91];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    dp[1] = 1;
    for(int i =2; i <= 90; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n];
    return 0;
}