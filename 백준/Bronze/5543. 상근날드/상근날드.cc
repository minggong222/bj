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
    int x = min(a, min(b, c));
    int d, e;
    cin >> d >> e;
    int y = min(d, e);
    cout << x + y - 50;
    return 0;
}