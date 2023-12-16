#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.size(), -1);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 0)
            answer[i] = -1;
        else
        {
            for(int j = i + 1; j < s.size(); j++)
            {
                if(s[i] == s[j])
                    answer[j] = j-i;
            }
        }
    }
    return answer;
}