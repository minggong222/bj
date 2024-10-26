#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (1)
    {
        string str;
        int a, b;
        cin >> str >> a >> b;
        if (str == "#")
            break;
        if (a > 17 || b >= 80)
        {
            cout << str << ' ' << "Senior\n";
        }
        else
        {
            cout << str << ' ' << "Junior\n";
        }
    }
    return 0;
}