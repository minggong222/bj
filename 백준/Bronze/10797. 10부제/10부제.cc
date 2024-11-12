#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        a %= 10;
        if (a == n)
            ans++;
    }
    cout << ans;
}
