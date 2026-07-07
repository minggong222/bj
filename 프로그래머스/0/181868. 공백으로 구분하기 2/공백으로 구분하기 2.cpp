#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string s = "";
    for(auto x : my_string){
        if(x == ' '){
            if(s != ""){
                answer.push_back(s);
                s = "";
            }
        }else s += x;
    }
    if(s != "") answer.push_back(s);
    return answer;
}