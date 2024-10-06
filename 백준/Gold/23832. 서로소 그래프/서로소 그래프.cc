#include <iostream>
#define ll long long
using namespace std;
int n, ans = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int a = i;
        int N = i;
        for (int j = 2; j * j <= N; j++)
        {
            if (N % j != 0)
                continue;
            a -= a / j;
            while (N % j == 0)
                N /= j;
        }
        if (N > 1)
            a -= a / N;
        ans += a;
    }
    cout << ans;
    return 0;
}