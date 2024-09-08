#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
int n, m;
bool map[50][50];
int dir[8][2] = {{0, 1}, {0, -1}, {1, 1}, {1, 0}, {1, -1}, {-1, 1}, {-1, 0}, {-1, -1}};
void dfs(int x, int y)
{
    map[x][y] = false;
    for (int i = 0; i < 8; i++)
    {
        int X = x+dir[i][0], Y = y+dir[i][1];
        if (X < n && X >= 0 && Y < m && Y >= 0 && map[X][Y]){
            dfs(X,Y);
        }
    }
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (true)
    {
        int answer = 0;
        cin >> m >> n;
        if (n == 0 || m == 0)
            break;
        memset(map, false, sizeof(map));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> map[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(map[i][j]){
                    dfs(i,j);
                    answer++;
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}