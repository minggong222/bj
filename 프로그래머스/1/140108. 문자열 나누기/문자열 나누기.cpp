#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x = s[0];
    int a = 0;
    int b = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if( s[i] == x )
            a++;
        else
            b++;
        if(a == b)
        {
            a = 0;
            b = 0;
            if(s.size() > i + 1)
                x = s[i+1];
            answer++;
            if(i+2 == s.size())
            {
                answer++;
                break;
            }
        }else if(i+1 == s.size())
            answer++;
    }
    if(answer == 0)
        return 1;
    return answer;
}