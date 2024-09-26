#include <iostream>
#define ll long long
using namespace std;
int a, b;
int dp1[31];
int dp2[31];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    dp1[2] = 0;
    dp1[3] = 1;
    dp2[2] = 1;
    dp2[3] = 1;
    for (int i = 4; i <= 30; i++)
    {
        dp1[i] = dp1[i - 2] + dp1[i - 1];
        dp2[i] = dp2[i - 2] + dp2[i - 1];
    }
    for (int i = 1; i <= b/2 + 1; i++)
    {
        for (int j = i; j <= b/2 + 1; j++)
        {
            if (i * dp1[a] + j * dp2[a] == b)
            {
                cout << i << '\n'
                     << j;
                return 0;
            }
        }
    }
    return 0;
}