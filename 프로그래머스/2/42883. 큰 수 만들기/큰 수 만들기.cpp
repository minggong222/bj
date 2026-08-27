#include <string>
#include <vector>
#include <stack>
using namespace std;

string solution(string number, int k) {
    string answer = "";
    stack<char> s;
    int cnt = 0;
    int idx = 1;
    s.push(number[0]);
    while(cnt < k){
        if(!s.empty() && s.top() < number[idx]){
            s.pop();
            cnt++;
            continue;
        }
        s.push(number[idx++]);
        if(idx == number.size()){
            s.pop();
            cnt++;
        }
    }
    while(idx < number.size()){
        s.push(number[idx++]);
    }
    while(!s.empty()){
        answer = s.top() + answer;
        s.pop();
    }
    return answer;
}