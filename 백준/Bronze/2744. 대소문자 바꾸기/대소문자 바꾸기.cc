#include <iostream>
#define ll long long
using namespace std;
string str;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] <= 'z' && str[i] >= 'a')
        {
            cout << (char)(str[i] + 'A' - 'a');
        }
        else
        {
            cout << (char)(str[i] + 'a' - 'A');
        }
    }
    return 0;
}