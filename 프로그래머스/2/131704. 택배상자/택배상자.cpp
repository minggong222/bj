#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    queue<int> q;
    stack<int> s;
    for(int i = 1; i <= order.size(); i++){
        q.push(i);
    }
    int idx = 0;
    while(!q.empty()){
        int i = q.front();
        q.pop();
        if(order[idx] == i){
            answer++;
            idx++;
            while(!s.empty()){
                i = s.top();
                if(order[idx] == i){
                    s.pop();
                    answer++;
                    idx++;
                }else{
                    break;
                }
            }
        }else{
            s.push(i);
        }
    }
    return answer;
}