#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int x = 0;
    for(auto str: s)
    {
        if(str == ' ')
        {
            answer.push_back(' ');
            x = 0;
        }else if(x == 0)
        {
            if(str >='a' && str <= 'z')
                answer.push_back(str - 32);
            else
                answer.push_back(str);
            x = 1;
        }else
        {
            if(str >='A' && str <= 'Z')
                answer.push_back(str + 32);
            else
                answer.push_back(str);
        }
    }
    return answer;
}