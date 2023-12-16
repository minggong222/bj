#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<int> a(4,0);
    for(int i = 0; i < survey.size(); i++)
    {
        if(survey[i] == "RT")
        {
            if( choices[i] >= 4)
                a[0] -= choices[i]%4;
            else
                a[0] += 4-choices[i];
        }else if(survey[i] == "TR")
        {
            if( choices[i] >= 4)
                a[0] += choices[i]%4;
            else
                a[0] -= 4-choices[i];
        }else if(survey[i] == "CF")
        {
            if( choices[i] >= 4)
                a[1] -= choices[i]%4;
            else
                a[1] += 4-choices[i];
        }else if(survey[i] == "FC")
        {
            if( choices[i] >= 4)
                a[1] += choices[i]%4;
            else
                a[1] -= 4-choices[i];
        }else if(survey[i] == "JM")
        {
            if( choices[i] >= 4)
                a[2] -= choices[i]%4;
            else
                a[2] += 4-choices[i];
        }else if(survey[i] == "MJ")
        {
            if( choices[i] >= 4)
                a[2] += choices[i]%4;
            else
                a[2] -= 4-choices[i];
        }else if(survey[i] == "AN")
        {
            if( choices[i] >= 4)
                a[3] -= choices[i]%4;
            else
                a[3] += 4-choices[i];
        }else if(survey[i] == "NA")
        {
            if( choices[i] >= 4)
                a[3] += choices[i]%4;
            else
                a[3] -= 4-choices[i];
        }
    }
    if(a[0] >= 0)
        answer.push_back('R');
    else
        answer.push_back('T');
    if(a[1] >= 0)
        answer.push_back('C');
    else
        answer.push_back('F');
    if(a[2] >= 0)
        answer.push_back('J');
    else
        answer.push_back('M');
    if(a[3] >= 0)
        answer.push_back('A');
    else
        answer.push_back('N');
    return answer;
}