#include <iostream>
#include <map>
#define ll long long
using namespace std;
string str;
int n, m;
int ans = 0;
class Trie
{
public:
    map<char, Trie *> T;
    bool finish = false;
    void insert(int i)
    {
        if (str.size() == i)
        {
            finish = true;
            return;
        }
        if (!T[str[i]])
        {
            T[str[i]] = new Trie;
        }
        T[str[i]]->insert(i + 1);
    }
    void find(int i)
    {
        if (str.size() == i)
        {
            ans++;
            return;
        }
        if (!T[str[i]])
        {
            return;
        }
        T[str[i]]->find(i + 1);
    }
};
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    Trie *root = new Trie;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        root->insert(0);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        root->find(0);
    }
    cout << ans;
    return 0;
}