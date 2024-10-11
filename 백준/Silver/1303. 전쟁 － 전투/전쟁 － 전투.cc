#include <iostream>
#include <queue>
#include <map>
#define ll long long
using namespace std;
int n, m;
int dir[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
string arr[100];
bool visit[100][100];
map<char, int> ans;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visit[i][j])
            {
                int cnt = 1;
                queue<pair<int, int>> q;
                q.push({i, j});
                visit[i][j] = true;
                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for (int k = 0; k < 4; k++)
                    {
                        int nextX = x + dir[k][0];
                        int nextY = y + dir[k][1];
                        if (nextX >= 0 && nextX < n && nextY >= 0 && nextY < m)
                        {
                            if (!visit[nextX][nextY] && arr[nextX][nextY] == arr[x][y])
                            {
                                q.push({nextX, nextY});
                                cnt++;
                                visit[nextX][nextY] = true;
                            }
                        }
                    }
                }
                ans[arr[i][j]] += cnt * cnt;
            }
        }
    }
    cout << ans['W'] << ' ' << ans['B'];
    return 0;
}