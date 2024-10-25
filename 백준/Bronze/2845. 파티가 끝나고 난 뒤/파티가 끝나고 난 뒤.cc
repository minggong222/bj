#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;
    int arr[5];
    cin >> a >> b;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] - a * b << ' ';
    }
    return 0;
}