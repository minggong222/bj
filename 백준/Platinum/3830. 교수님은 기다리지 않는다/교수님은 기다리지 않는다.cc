#include <iostream>
#define ll long long
using namespace std;
pair<int, int> p[100001];
int w1 = 0, w2 = 0;
int find(int x)
{
    if (x == p[x].first)
        return x;
    int px = find(p[x].first);
    p[x].second += p[p[x].first].second;
    return p[x].first = px;
}

void Union(int x, int y, int w)
{
    int px = find(x);
    int py = find(y);
    if (px != py)
    {
        p[px].first = py;
        p[px].second = p[y].second - p[x].second - w;
    }
}
void find_w(int x, int y)
{
    if (find(x) != find(y))
    {
        cout << "UNKNOWN\n";
    }
    else
    {
        cout << p[y].second - p[x].second << '\n';
    }
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (1)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        for (int i = 1; i <= n; i++)
        {
            p[i].first = i;
            p[i].second = 0;
        }
        for (int i = 0; i < m; i++)
        {
            int a, b, w;
            char type;
            w1 = 0;
            w2 = 0;
            cin >> type;
            switch (type)
            {
            case '!':
                cin >> a >> b >> w;
                Union(a, b, w);
                break;
            case '?':
                cin >> a >> b;
                find_w(a, b);
                break;
            }
        }
    }
    return 0;
}