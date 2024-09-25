#include <iostream>
#include <map>
#include <algorithm>
#define ll long long
using namespace std;
int t;
string str[10001];
class Trie
{
public:
    map<char, Trie *> T;
    bool finish = false;

    bool insert(int i, int j)
    {
        if (j == str[i].size())
        {
            finish = true;
            return true;
        }
        else
        {
            if (!T[str[i][j]])
                T[str[i][j]] = new Trie;
            if (T[str[i][j]]->finish)
                return false;
            return T[str[i][j]]->insert(i, j+1);
        }
    }
};
bool cmp(string a, string b){
    return a.size() < b.size();
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        int n;
        bool ans = true;
        Trie *root = new Trie;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        sort(str,str + n, cmp);
        for (int i = 0; i < n; i++)
        {
            if (ans)
            {
                ans = root->insert(i, 0);
            }
        }
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}