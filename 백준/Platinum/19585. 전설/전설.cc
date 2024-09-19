#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstring>
#include <map>
#define ll long long
using namespace std;
int n, m, k;
unordered_set<string> s;
string str;
class Trie
{
public:
    bool finish;
    map<char,Trie*> T;

    void insert(int i)
    {
        if (i == str.size())
            finish = true;
        else
        {
            if (!T[str[i]])
                T[str[i]] = new Trie;
            T[str[i]]->insert(i+1);
        }
    }

    bool find(int i)
    {
        if (!T[str[i]] || i == str.size())
            return false;
        if(T[str[i]]->finish && s.find(str.substr(i+1)) != s.end())
            return true;
        return T[str[i]]->find(i+1);
    }
};
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    Trie *root = new Trie;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        root->insert(0);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        s.insert(str);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> str;
        if (!root->find(0))
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}