#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    bool s = true;
    for(int i = 0; i < str_list.size() && s; i++){
        if(str_list[i] == "l"){
            s = false;
            for(int j = 0; j < i; j++)
                answer.push_back(str_list[j]);
        }else if(str_list[i] == "r"){
            s = false;
            for(int j = i+1; j < str_list.size(); j++)
                answer.push_back(str_list[j]);
        }
    }
    return answer;
}