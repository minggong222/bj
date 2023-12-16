#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i = 0; i < new_id.size(); i++)
    {
        if(new_id[i] >= 65 && new_id[i] <= 90)
            new_id[i] = new_id[i] + 32;
        else if((new_id[i] != '.' && new_id[i] != '-' && new_id[i] != '_') && !(new_id[i] >= 97 && new_id[i] <= 122) && !(new_id[i] >= 48 && new_id[i] <= 57))
        {
            new_id.erase(new_id.begin() + i);
            i--;
        }
    }
    for(int i = 0; i < new_id.size(); i++)
    {
        if(new_id[i] == '.' && i+1 < new_id.size())
        {
            if(new_id[i+1] == '.')
            {
                new_id.erase(new_id.begin() + i);
                i--;
            }
        }
    }
    if(new_id[0] == '.')
        new_id.erase(new_id.begin());
    while(1)
    {
        if(answer[answer.size()-1] == '.')
            answer.erase(answer.begin() + answer.size() -1);
        else
            break;
    }
    for(int i = 0; i < new_id.size(); i++)
    {
        if(i < 15)
            answer.push_back(new_id[i]);
    }
    if(answer.size() == 0)
    {
        return "aaa";
    }
    while(1)
    {
        if(answer[answer.size()-1] == '.')
            answer.erase(answer.begin() + answer.size() -1);
        else
            break;
    }
    if(answer.size() < 3)
    {
        for(int i = answer.size()-1; i < 2; i++)
            answer.push_back(answer[i]);
    }
    return answer;
}