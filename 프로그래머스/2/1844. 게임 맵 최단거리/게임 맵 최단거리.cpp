#include<vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    vector<vector<int>> v(maps.size(),vector<int>(maps[0].size(),1234567890));
    queue<pair<pair<int,int>, int>> q;
    vector<vector<int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
    q.push({{0,0},1});
    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cost = q.front().second;
        q.pop();
        if(v[x][y] <= cost) continue;
        v[x][y] = cost;
        for(int i = 0; i < 4; i++){
            int nx = x+d[i][0];
            int ny = y+d[i][1];
            if(nx >= 0 && nx < maps.size() &&
               ny >= 0 && ny < maps[0].size() && maps[nx][ny] == 1){
                q.push({{nx,ny},cost+1});
            }
        }
    }
    answer = v[maps.size()-1][maps[0].size()-1];
    return answer == 1234567890 ? -1 : answer;
}