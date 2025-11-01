#include<queue>
#include<vector>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int asd[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    queue<pair<int,int>> q;
    q.push(pair<int,int>(0,0));
    vector<vector<int>> v(100, vector<int>(100, 100000));
    v[0][0] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + asd[i][0];
            int ny = y + asd[i][1];
            if(nx < 0 || nx >= maps.size() || ny < 0 || ny >= maps[0].size())
                continue;
            if(maps[nx][ny] && v[nx][ny] > v[x][y] + 1){
                q.push({nx,ny});
                v[nx][ny] = v[x][y] + 1;
            }
        }
    }
    
    answer = v[maps.size()-1][maps[0].size()-1];
    if(answer == 100000)
        return -1;
    else
        return answer;
}