#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    stack<int> s;
    int idx = 0;
    for(int i = 1; i <= order.size(); i++){
        s.push(i);
        while(!s.empty()){
            if(s.top() == order[idx]){
                s.pop();
                answer++;
                idx++;
            }else
                break;
        }
    }
    return answer;
}