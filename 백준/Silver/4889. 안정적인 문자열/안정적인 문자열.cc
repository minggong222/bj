#include <iostream>
#include <stack>
#define ll long long
using namespace std;
string str;
int idx = 1;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (1)
    {
        int answer = 0;
        stack<char> s;
        cin >> str;
        if (str[0] == '-')
            break;
        for (int i = 0; i < str.size(); i++)
        {
            if (s.empty())
            {
                if (str[i] == '}')
                    answer++;
                s.push('{');
            }
            else
            {
                if (str[i] == '}')
                {
                    s.pop();
                }
                else
                {
                    s.push('{');
                }
            }
        }
        if (!s.empty())
        {
            answer += s.size() / 2;
        }
        cout << idx++ << ". " << answer << '\n';
    }
    return 0;
}