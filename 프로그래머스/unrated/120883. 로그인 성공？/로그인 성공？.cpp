#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    for(auto x: db)
    {
        if(id_pw[0] == x[0])
        {
            if(id_pw[1] == x[1])
            {
                answer = "login";
            }else
            {
                answer = "wrong pw";
            }
        }
    }
    if(answer == "")
        answer = "fail";
    return answer;
}