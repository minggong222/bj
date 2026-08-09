#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> s;
    for(auto x : ingredient){
        if(x == 3){
            if(!s.empty() && s.top() == 2){
                s.push(x);
            }else{
                while(!s.empty()) s.pop();
            }
        }else if(x == 2){
            if(!s.empty() && s.top() == 1){
                s.push(x);
            }else{
                while(!s.empty()) s.pop();
            }
        }else{
            if(!s.empty() && s.top() == 3){
                s.pop();
                s.pop();
                s.pop();
                answer++;
            }else
                s.push(x);
        }
    }
    return answer;
}