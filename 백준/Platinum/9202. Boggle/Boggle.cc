#include <iostream>
#include <map>
#include <set>
#include <cstring>
#define ll long long
using namespace std;
string str;
int n, m;
string arr[4];
bool visit[4][4];
set<string> ansSet;
string ans = "";
int total = 0;
int cnt = 0;
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
class Trie
{
public:
    map<char, Trie *> T;
    string s = "";
    void insert(int i)
    {
        if (i == str.size())
        {
            s = str;
        }
        else
        {
            if (!T[str[i]])
                T[str[i]] = new Trie;
            T[str[i]]->insert(i + 1);
        }
    }

    void find(int x, int y)
    {
        visit[x][y] = true;
        for (int i = 0; i < 8; i++)
        {
            int X = x + dir[i][0], Y = y + dir[i][1];
            if (X >= 0 && X < 4 && Y >= 0 && Y < 4 && !visit[X][Y])
            {
                if (T[arr[X][Y]])
                {
                    if (T[arr[X][Y]]->s.size() > 0)
                    {
                        string S = T[arr[X][Y]]->s;
                        if (ansSet.find(S) == ansSet.end())
                        {
                            ansSet.insert(S);
                            cnt++;
                            switch (S.size())
                            {
                            case 3:
                            case 4:
                                total++;
                                break;
                            case 5:
                                total += 2;
                                break;
                            case 6:
                                total += 3;
                                break;
                            case 7:
                                total += 5;
                                break;
                            case 8:
                                total += 11;
                                break;
                            }
                            if (ans.size() < S.size())
                                ans = S;
                            else if (ans.size() == S.size())
                                ans = min(ans, S);
                        }
                    }
                    T[arr[X][Y]]->find(X, Y);
                }
            }
        }
        visit[x][y] = false;
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
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        ans = "";
        total = 0;
        cnt = 0;
        ansSet.clear();
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
            {
                memset(visit, false, sizeof(visit));
                if (root->T[arr[j][k]])
                {
                    root->T[arr[j][k]]->find(j,k);
                }
            }
        cout << total << ' ' << ans << ' ' << cnt << '\n';
    }
    return 0;
}