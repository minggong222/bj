#include <iostream>
#define ll long long
using namespace std;
int n;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    double m = 0;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        double a;
        cin >> a;
        m = max(a, m);
        ans += a;
    }
    cout << m + (ans - m) / 2.0;

    return 0;
}