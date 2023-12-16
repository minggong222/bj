#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int a;
    for(int i = 0 ; i < s.size();i++)
    {
        if(s[i] != ' ')
        {
            a = s[i];
            if((a >64 && a < 91))
            {
                if(a+n < 91)
                    answer.push_back(a+n);
                else
                    answer.push_back(a+n-26);
            }
            else{
                if(a+n < 123)
                    answer.push_back(a+n);
                else
                    answer.push_back(a+n-26);
            }
        }else{
            answer.push_back(' ');
        }
    }
    return answer;
}