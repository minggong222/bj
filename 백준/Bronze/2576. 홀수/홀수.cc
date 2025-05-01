#include <iostream>
#define ll long long
using namespace std;
int n[7];
int sum = 0;
int m = 100;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 7; i++)
    {
        cin >> n[i];
        if (n[i] % 2)
        {
            m = min(m, n[i]);
            sum += n[i];
        }
    }
    if (sum)
        cout << sum << '\n'
             << m;
    else
        cout << -1;
}