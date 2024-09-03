#include <iostream>
#define ll long long
using namespace std;
int n;
int arr[6];
int t, p;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> arr[i];
    cin >> t >> p;
    int T = 6;
    for (int i = 0; i < 6; i++)
    {
        T += arr[i] / t;
        if (arr[i] % t == 0)
            T--;
    }
    cout << T << '\n'
         << n / p << ' ' << n % p;
    return 0;
}