#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> a;
    for(int i = 0; i < s.size(); i++){
        if(a.empty() || s[i] == '('){
            a.push(s[i]);
        }else{
            a.pop();
        }
    }
    return a.empty();
}