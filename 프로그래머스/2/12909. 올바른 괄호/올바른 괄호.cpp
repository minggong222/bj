#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int x = 0;
    if(s[0] == ')')
        return false;
    if(s[s.size()-1] == '(')
        return false;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] != s[i + 1])
        {
            if(x < 0 )
                return false;
        }else{
            if(s[i] == '(')
                x++;
            else
                x--;
        }
    }
    
    if(x == 0)
        return answer;
    else
        return false;
}