#include <iostream>
#include <queue>
#define ll long long
using namespace std;
int n, m, k;
bool arr[101][101];
int dir[4][2] = {{-1,0},{0,-1},{0,1},{1,0}};
int answer = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] = true;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(arr[i][j]){
                queue<pair<int,int>> q;
                int cnt = 1;
                q.push({i,j});
                arr[i][j] = false;
                while(!q.empty()){
                    int a = q.front().first;
                    int b = q.front().second;
                    q.pop();
                    for(int k = 0; k < 4; k++){
                        int x = a+dir[k][0];
                        int y = b+dir[k][1];
                        if(x > 0 && x <= n&& y >0 && y <=m&&arr[x][y]){
                            arr[x][y] = false;
                            cnt++;
                            q.push({x,y});
                        }
                    }
                }
                answer = max(answer, cnt);
            }
        }
    }
    cout << answer;
    return 0;
}