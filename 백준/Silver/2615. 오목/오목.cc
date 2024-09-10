#include <iostream>
#define ll long long
using namespace std;
int arr[20][20];
int dir[4][2] = {{1, 1}, {-1, 1}, {0, 1}, {1, 0}};
bool dfs(int x, int y, int d, int cnt, int c)
{
    int X = x + dir[d][0], Y = y + dir[d][1];
    if (X <= 19 && Y <= 19 && Y > 0 && arr[X][Y] == c)
    {
        if (cnt == 4 || dfs(x + dir[d][0], y + dir[d][1], d, cnt + 1, c))
            return true;
    }
    return false;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int j = 1; j <= 19; j++)
    {
        for (int i = 1; i <= 19; i++)
        {
            if (arr[i][j] != 0)
            {
                for (int k = 0; k < 4; k++)
                {
                    if (dfs(i, j, k, 1, arr[i][j]))
                    {
                        int X = i + dir[k][0]*5, Y = j + dir[k][1]*5;
                        if (X > 0 && Y > 0 && X <= 19 && Y <= 19 && arr[X][Y] == arr[i][j])
                            continue;
                        X = i - dir[k][0], Y = j - dir[k][1];
                        if (X > 0 && Y > 0 && X <= 19 && Y <= 19 && arr[X][Y] == arr[i][j])
                            continue;
                        cout << arr[i][j] << '\n'
                             << i << ' ' << j;
                        return 0;
                    }
                }
            }
        }
    }
    cout << 0;
    return 0;
}