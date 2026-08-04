#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(auto s : skill_trees){
        int idx = 0;
        bool sw = true;
        for(int i = 0; i < s.size(); i++){
            if(skill.find(s[i]) != string::npos){
                if(skill[idx] == s[i]){
                    idx++;
                }else{
                    sw = false;
                    break;
                }
            }
        }
        if(sw)  answer++;
    }
    return answer;
}