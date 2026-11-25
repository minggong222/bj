#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#define ll long long
#define MAX 2147483647
using namespace std;
int n, answer = 0;
ll dp[1000001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    
    ll idx = 1;
    ll cnt = 0;
    ll add = 1;
    for (int i = 1; i <= n; i++)
    {
        if (cnt == idx) {
            idx++;
            cnt = 0;
            add = (add * 2) % 9901;
        }
        dp[i] = (dp[i - 1] + add) % 9901;
        dp[i] %= 9901;
        cnt++;
    }

    cout << dp[n];
    return 0;
}