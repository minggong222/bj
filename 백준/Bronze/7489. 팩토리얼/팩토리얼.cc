#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <string>
#define ll long long
#define MAX 2147483647
using namespace std;
int n, m = 0;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    ll dp[1001];
    dp[0] = 1;
    for (int i = 1; i <= 1000; i++)
    {
        dp[i] = dp[i - 1] * i;
        while (dp[i] % 10 == 0)
        {
            dp[i] /= 10;
        }
        dp[i] %= 1000;
    }
    while (n--)
    {
        cin >> m;
        string str = to_string(dp[m]);
        for (int i = str.size() - 1;i >= 0;i--)
        {
            if (str[i] != '0')
            {
                cout << str[i] - '0' << '\n';
                break;
            }
        }
    }
    return 0;
}