#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> m;
    vector<pair<string, bool>> v;
    for(auto s : record){
        int idx = 0;
        vector<string> str(3, "");
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                idx = i + 1;
                break;
            }else{
                str[0] += s[i];
            }
        }
        for(int i = idx; i < s.size(); i++){
            if(s[i] == ' '){
                idx = i + 1;
                break;
            }else{
                str[1] += s[i];
            }
        }
        for(int i = idx; i < s.size(); i++)
            str[2] += s[i];
        if(str[0] == "Enter"){
            v.push_back({str[1], true});
            m[str[1]] = str[2];
        }else if(str[0] == "Leave"){
            v.push_back({str[1], false});
        }else{
            m[str[1]] = str[2];
        }
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i].second){
            answer.push_back(m[v[i].first]);
            answer[i] += "님이 들어왔습니다.";
        }else{
            answer.push_back(m[v[i].first]);
            answer[i] += "님이 나갔습니다.";
        }
    }
    return answer;
}