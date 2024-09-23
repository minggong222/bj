#include <iostream>
#include <stack>
#define ll long long
using namespace std;
string str;
string ans = "";
stack<char> s;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '<')
        {
            while (str[i] != '>')
            {
                ans += str[i];
                i++;
            }
            ans += str[i];
        }
        else if (str[i] != ' ')
        {
            while (str[i] != ' ' && str[i] != '<' && i < str.size())
            {
                s.push(str[i]);
                i++;
            }
            while (!s.empty())
            {
                ans += s.top();
                s.pop();
            }
            i--;
        }
        else
        {
            ans += str[i];
        }
    }
    cout << ans;
    return 0;
}