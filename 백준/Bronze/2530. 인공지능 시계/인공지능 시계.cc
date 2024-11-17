#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = a * 3600 + b * 60 + c + d;
    cout << (ans/3600)%24 << ' ' << ans/60%60 << ' '<< ans%60;
    return 0;
}