#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    map<string, string> m;
    for(auto x : db){
        m[x[0]] = x[1];
    }
    if(m.find(id_pw[0]) == m.end()){
        answer = "fail";
    }else{
        if(m[id_pw[0]] == id_pw[1])
            answer = "login";
        else
            answer = "wrong pw";
    }
    return answer;
}