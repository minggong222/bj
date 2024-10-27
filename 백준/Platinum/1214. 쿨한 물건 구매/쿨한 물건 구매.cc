#include <iostream>
#define ll long long
using namespace std;
ll a, b, c;
ll ans = 2'100'000'000;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (b > c)
    {
        swap(b, c);
    }
    if (a % b == 0 || a % c == 0 || a % (b + c) == 0)
    {
        cout << a;
        return 0;
    }
    ans = a - (a % c) + c;
    int idx = a / c + 1;
    while (idx)
    {
        int now = a - c * (--idx);
        if(now % b == 0){
            ans = a;
            break;
        }
        int x = now / b + 1;
        int y = b * x + c * idx;
        if(ans == y){
            break;
        }
        ans = min(ans, b * x + c * idx);
    }
    cout << ans;
    return 0;
}