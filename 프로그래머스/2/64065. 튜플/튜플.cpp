#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmd(vector<int> a, vector<int> b){
    return a.size() < b.size();
}
vector<int> solution(string s) {
    vector<int> answer;
    vector<vector<int>> v;
    string str = "";
    for(int i = 1; i < s.size()-1; i++){
        if(s[i] == '{'){
            answer.clear();
            continue;
        }
        if(s[i] == '}'){
            answer.push_back(stoi(str));
            str.clear();
            v.push_back(answer);
            i++;
            continue;
        }
        if(s[i] == ','){
            answer.push_back(stoi(str));
            str.clear();
            continue;
        }
        str += s[i];
    }
    sort(v.begin(), v.end(), cmd);
    answer.clear();
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j <v[i].size(); j++){
            if(find(answer.begin(), answer.end(), v[i][j]) == answer.end()){
                answer.push_back(v[i][j]);
                break;
            }
        }
    }
    return answer;
}