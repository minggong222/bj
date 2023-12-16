#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> m;
    vector<vector<string>> vv;
    for(int i = 0; i < record.size(); i++){
        istringstream ss(record[i]);
        string s;
        vector<string> v;
        while(getline(ss,s,' ')){
            v.push_back(s);
        }
        if(m.find(v[1]) == m.end()){
            m.insert(make_pair(v[1],v[2]));
        }else{
            if(v[0] == "Change"){
                m[v[1]] = v[2];
            }else if(v[0] == "Enter"){
                m[v[1]] = v[2];
            }
        }
        vv.push_back(v);
    }
    for(int i = 0; i < vv.size(); i++){
        if(vv[i][0] == "Enter"){
            string s = m[vv[i][1]] + "님이 들어왔습니다.";
            answer.push_back(s);
        }
        else if(vv[i][0] == "Leave"){
            string s = m[vv[i][1]] + "님이 나갔습니다.";
            answer.push_back(s);
        }
    }
    return answer;
}