#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> q;
    for(int i = 0; i < priorities.size(); i++)    q.push({priorities[i],i});
    while(!q.empty()){
        int cnt = 0;
        int s = q.size();
        int p = q.front().first;
        bool sw = true;
        for(int i = 0; i < s; i++){
            if(p < q.front().first){
                p = q.front().first;
                sw = false;
                break;
            }
            q.push(q.front());
            q.pop();
        }
        if(sw){
            answer++;
            if(location == q.front().second){
                break;
            }
            q.pop();
        }
    }
    return answer;
}