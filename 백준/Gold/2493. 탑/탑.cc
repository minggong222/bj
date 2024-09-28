#include <iostream>
#include <stack>
#define ll long long
using namespace std;
int n;
stack<pair<int, int>> s;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        while (!s.empty())
        {
            int y = s.top().first;
            if (y < x)
            {
                s.pop();
            }
            else
                break;
        }
        if (!s.empty())
        {
            cout << s.top().second << ' ';
            s.push({x, i});
        }
        else
        {
            cout << 0 << ' ';
            s.push({x, i});
        }
    }
    return 0;
}