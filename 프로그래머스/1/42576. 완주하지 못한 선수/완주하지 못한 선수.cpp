#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for(int i = 0; i < completion.size(); i++)
    {
        participant.push_back(completion[i]);
    }
    sort(participant.begin(), participant.end());
    for(int i = 0; i < participant.size(); i++)
    {
        if(i+1 < participant.size())
        {
            if(participant[i] == participant[i+1])
                i++;
            else
                return participant[i];
        }else{
            return participant[i];
        }
    }
    answer = participant[0];
    return answer;
}