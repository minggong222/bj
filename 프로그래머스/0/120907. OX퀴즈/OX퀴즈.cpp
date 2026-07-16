#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(auto s : quiz){
        stringstream ss(s);
        string str;
        vector<string> sv;
        while(ss >> str){
            sv.push_back(str);
        }
        if(sv[1] == "+"){
            if(stoi(sv[0]) + stoi(sv[2]) == stoi(sv[4])){
                answer.push_back("O");
            }else{
                answer.push_back("X");
            }
        }else{
            if(stoi(sv[0]) - stoi(sv[2]) == stoi(sv[4])){
                answer.push_back("O");
            }else{
                answer.push_back("X");
            }
        }
    }
    return answer;
}