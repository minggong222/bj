#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> x;
    for(auto c : s){
        if(x.empty()){
            x.push(c);
        }else{
            if(x.top() == c)
                x.pop();
            else
                x.push(c);
        }
    }

    return x.empty();
}