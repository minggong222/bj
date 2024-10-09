#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define ll long long
#define INF 1234567890
using namespace std;
int n, m;
int dij[500];
vector<int> path[500];
priority_queue<pair<int, int>> q;
vector<pair<int, int>> v[500];
int Dij(int start, int end)
{
    for (int i = 0; i < n; i++)
    {
        dij[i] = INF;
    }
    dij[start] = 0;
    q.push({0, start});
    while (!q.empty())
    {
        int cost = -q.top().first;
        int now = q.top().second;
        q.pop();
        for (int i = 0; i < v[now].size(); i++)
        {
            int next = v[now][i].first;
            int ncost = v[now][i].second;
            int C = cost + ncost;
            if (C <= dij[next])
            {
                if (C < dij[next])
                {
                    q.push({-C, next});
                    path[next].clear();
                }
                path[next].push_back(now);
                dij[next] = C;
            }
        }
    }
    return dij[end];
}
void erase(int end)
{
    for (int j = 0; j < path[end].size(); j++)
    {
        int now = path[end][j];
        for (int i = 0; i < v[now].size(); i++)
        {
            if (v[now][i].first == end)
            {
                v[now].erase(v[now].begin() + i);
                erase(now);
                break;
            }
        }
    }
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        int start, end;
        cin >> start >> end;
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            v[a].push_back({b, c});
        }

        int Min = Dij(start, end);
        erase(end);
        int answer = Dij(start, end);
        if (answer == INF)
            cout << -1 << '\n';
        else
            cout << answer << '\n';
        for (int i = 0; i < n; i++)
        {
            v[i].clear();
            path[i].clear();
        }
    }
    return 0;
}