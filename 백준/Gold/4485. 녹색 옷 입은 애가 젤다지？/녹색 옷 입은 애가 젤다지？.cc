#include <iostream>
#include <queue>
#include <vector>
#define ll long long
#define INF 1234567890
using namespace std;
int n, idx = 0;
int arr[125][125];
int dir[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (1)
    {
        idx++;
        cin >> n;
        if (!n)
            break;
        priority_queue<pair<int, pair<int, int>>> q;
        int dist[125][125];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                dist[i][j] = INF;
            }
        }
        dist[0][0] = arr[0][0];
        q.push({-arr[0][0], {0, 0}});
        while (!q.empty())
        {
            int cost = -q.top().first;
            pair<int, int> now = q.top().second;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                pair<int, int> next = {now.first + dir[i][0], now.second + dir[i][1]};
                if (next.first >= 0 && next.first < n && next.second >= 0 && next.second < n)
                {
                    int ncost = cost + arr[next.first][next.second];
                    if (ncost < dist[next.first][next.second])
                    {
                        q.push({-ncost, next});
                        dist[next.first][next.second] = ncost;
                    }
                }
            }
        }
        cout << "Problem " << idx << ": " << dist[n - 1][n - 1] << '\n';
    }
    return 0;
}