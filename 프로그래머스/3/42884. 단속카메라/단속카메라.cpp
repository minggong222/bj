#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0;
    priority_queue<pair<int,int>> pq;
    for(auto r : routes){
        pq.push({-r[0], -r[1]});
    }
    int x = -30001;
    while(!pq.empty()){
        int a = -pq.top().first;
        int b = -pq.top().second;
        pq.pop();
        if(x < a){
            x = b;
            answer++;
        }else{
            x = min(x, b);
        }
    }
    return answer;
}