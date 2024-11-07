#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << max(b,c);
    else if (b >= a && b >= c)
        cout << max(a,c);
    else if (c >= b && c >= a)
        cout << max(a,b);
    return 0;
}