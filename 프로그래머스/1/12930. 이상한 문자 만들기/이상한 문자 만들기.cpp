#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int j = 0;
    int sw =1;
    for(int i = 0; i < s.size(); i++)
    {
            if(s[i] != ' ')
            {
                if(j%2 == 0)
                {
                    if(s[i] > 91)
                    {
                        answer.push_back(s[i] - 32);
                        j++;
                    }else
                    {
                        answer.push_back(s[i]);
                        j++;
                    }
                }
                else
                {
                    if(s[i] > 91)
                    {
                        answer.push_back(s[i]);
                        j++;
                    }else
                    {
                        answer.push_back(s[i] + 32);
                        j++;
                    }
                }
            }else{
                answer.push_back(' ');
                j = 0;
                sw = 0;
            }

    }
    return answer;
}