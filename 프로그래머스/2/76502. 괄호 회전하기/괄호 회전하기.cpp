#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    queue<char> q;
    for(auto c : s) {
        q.push(c);
    }
    for(int i = 0; i < s.size(); i++){
        stack<char> y;
        queue<char> x = q;
        while(!x.empty()){
            if(y.empty()){
                y.push(x.front());
            }else{
                switch(y.top()){
                    case '[':
                        if(x.front() == ']')
                            y.pop();
                        else
                            y.push(x.front());
                        break;
                    case '{':
                        if(x.front() == '}')
                            y.pop();
                        else
                            y.push(x.front());
                        break;
                    case '(':
                        if(x.front() == ')')
                            y.pop();
                        else
                            y.push(x.front());
                        break;
                }
            }
            x.pop();
        }
        if(y.empty())
            answer++;
        q.push(q.front());
        q.pop();
    }
    return answer;
}