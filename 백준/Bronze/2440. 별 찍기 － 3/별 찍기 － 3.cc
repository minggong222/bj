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
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}