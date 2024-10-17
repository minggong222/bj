#include <iostream>
#define ll long long
using namespace std;
int t;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        ll ans;
        ll a, b;
        cin >> a >> b;
        ans = a + b;
        cout << a + b << '\n';
    }
    return 0;
}