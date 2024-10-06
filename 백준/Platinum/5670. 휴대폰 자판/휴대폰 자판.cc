#include <iostream>
#include <map>
#define ll long long
using namespace std;
int n;
float answer;
string str;
class Trie
{
public:
    map<char, Trie*> T;
    bool finish = false;
    void init(int i)
    {
        if (str.size() == i)
        {
            finish = true;
            return;
        }
        if (!T[str[i]])
            T[str[i]] = new Trie;
        T[str[i]]->init(i + 1);
    }
    void solve(int cnt)
    {
        int add = 0;
        if (finish)
        {
            answer += cnt;
            add = 1;
        }
        if (T.size() > 1)
        {
            add = 1;
        }
        for (auto iter = T.begin(); iter != T.end(); iter++)
        {
            T[iter->first]->solve(cnt + add);
        }
    }
};
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cout << fixed;
    cout.precision(2);
    while (1)
    {
        cin >> n;
        if (cin.eof())
            break;
        Trie* root = new Trie;
        answer = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            root->init(0);
        }
        if (root->T.size() == 1)
            root->solve(1);
        else
            root->solve(0);
        cout << answer / n << '\n';
    }
    return 0;
}