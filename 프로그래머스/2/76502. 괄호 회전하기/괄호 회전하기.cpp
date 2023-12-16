#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string s) {
    int answer = 0;
    stack<char> q;
    int a = s.size();
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(!q.empty())
            {
                if(q.top() + 2 == s[j] || q.top() + 1 == s[j])
                    q.pop();
                else
                    q.push(s[j]);
            }else{
                q.push(s[j]);
            }
        }
        if(q.empty())
            answer++;
        while( !q.empty() ) q.pop();
        s.push_back(s[0]);
        s.erase(s.begin());
    }
    return answer;
}