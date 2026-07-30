#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int> m;
    int idx = 1;
    for(int i = 0; i < 26; i++){
        string s = "";
        s += 'A'+i;
        m[s] = idx++;
    }
    string s = "";
    for(int i = 0; i < msg.size(); i++){
        s += msg[i];
        if(m.find(s) == m.end()){
            m[s] = idx++;
            answer.push_back(m[s.substr(0,s.size()-1)]);
            i--;
            s.clear();
        }
    }
    if(s != ""){
        answer.push_back(m[s]);
    }
    return answer;
}