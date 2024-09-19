#include <iostream>
#include <map>
#include <queue>
#define ll long long
using namespace std;
string str;
int n, m;
class Trie
{
public:
    map<char, Trie *> T;
    Trie *fail;
    bool finish;
    void insert(int i)
    {
        if (i == str.size())
            finish = true;
        else
        {
            if (!T[str[i]])
                T[str[i]] = new Trie;
            T[str[i]]->insert(i + 1);
        }
    }
};

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    Trie *root = new Trie;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        root->insert(0);
    }
    queue<Trie *> q;
    q.push(root);
    while (!q.empty())
    {
        Trie *current = q.front();
        q.pop();
        for (auto iter = current->T.begin(); iter != current->T.end(); iter++)
        {
            Trie *next = iter->second;
            if (current == root)
                next->fail = root;
            else
            {
                Trie *dest = current->fail;
                while (dest != root && !dest->T[iter->first])
                    dest = dest->fail;
                if (dest->T[iter->first])
                    dest = dest->T[iter->first];
                next->fail = dest;
            }
            if (next->fail->finish)
                next->finish = true;
            q.push(next);
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        Trie *current = root;
        bool result = false;
        for (int i = 0; i < str.size(); i++)
        {
            while (current != root && !current->T[str[i]])
                current = current->fail;
            if (current->T[str[i]])
                current = current->T[str[i]];
            if (current->finish)
            {
                result = true;
                break;
            }
        }
        if (result)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}