#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b)
        swap(a, b);
    if (a >= c)
        swap(a, c);
    if (b >= c)
        swap(b, c);
    cout << a << ' ' << b << ' ' << c;
    return 0;
}