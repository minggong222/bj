#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int x, int y, int n) {
    int answer = -1;
    queue<pair<int,int>> q;
    q.push({y,0});
    while(!q.empty()){
        int now = q.front().first;
        int idx = q.front().second;
        q.pop();
        if(now == x){
            answer = idx;
            break;
        }
        if(now%3 == 0){
            q.push({now/3,idx+1});
        }
        if(now%2 == 0){
            q.push({now/2,idx+1});
        }
        if(now-n > 0){
            q.push({now-n,idx+1});
        }
    }
    return answer;
}