#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;
int n, m, k, x;
vector<int> cur[300001];
int dij[300001];
priority_queue<pair<int, int>> q;
vector<int> answer;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m >> k >> x;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cur[a].push_back(b);
    }
    memset(dij, 333333, sizeof(dij));
    dij[x] = 0;
    for (int i = 0; i < cur[x].size(); i++)
    {
        dij[cur[x][i]] = 1;
        q.push({-1, cur[x][i]});
    }
    while (!q.empty())
    {
        int a = q.top().second;
        int cost = -q.top().first;
        q.pop();
        for (int i = 0; i < cur[a].size(); i++)
        {
            if (dij[cur[a][i]] < cost + 1)
                continue;
            dij[cur[a][i]] = cost + 1;
            q.push({-dij[cur[a][i]], cur[a][i]});
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dij[i] == k)
            answer.push_back(i);
    }
    if (answer.size() == 0)
        cout << -1;
    else
    {
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << '\n';
        }
    }
    return 0;
}