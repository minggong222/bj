#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> q;
    for(const auto& c : s)
    {
        if(!q.empty())
        {
            if(q.top() == c)
                q.pop();
            else
                q.push(c);
        }else{
            q.push(c);
        }
    }
    return q.empty() ? 1 : 0;
}