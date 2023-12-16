#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto x:my_string)
    {
        int j = 0;
        answer.push_back(x);
        for(int i = 0; i < answer.size();i++)
        {
            if(answer[i] == answer[answer.size()-1])
            {
                j++;
            }
            if(j > 1)
                answer.pop_back();
        }
    }
    return answer;
}