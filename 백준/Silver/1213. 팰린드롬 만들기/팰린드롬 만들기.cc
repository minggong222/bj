#include <iostream>
#include <map>
#define ll long long
using namespace std;
string str;
string lAns = "", rAns = "", cAns = "";
map<char, int> m;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++;
    }
    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        while (iter->second > 0)
        {
            if (iter->second % 2 == 0)
            {
                for (int i = 0; i < iter->second / 2; i++)
                {
                    lAns += iter->first;
                    rAns = iter->first + rAns;
                }
                iter->second = 0;
            }
            else
            {
                cAns+=iter->first;
                iter->second--;
            }
        }
        if (cAns.size() > 1)
        {
            cout << "I'm Sorry Hansoo";
            return 0;
        }
    }
    cout << lAns + cAns + rAns;
    return 0;
}