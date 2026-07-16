#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<pair<int, int>> q;
    for(int i = 0; i < progresses.size(); i++){
        q.push({progresses[i], speeds[i]});
    }
    int day = 1;
    int cnt = 0;
    while(!q.empty()){
        if(q.front().first + q.front().second*day >= 100){
            q.pop();
            cnt++;
        }else{
            if(cnt > 0){
                answer.push_back(cnt);
                cnt = 0;
            }
            day++;
        }
    }
    if(cnt > 0){
        answer.push_back(cnt);
        cnt = 0;
    }
    return answer;
}