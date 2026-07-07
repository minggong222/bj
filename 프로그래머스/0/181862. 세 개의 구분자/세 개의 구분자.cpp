#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string s;
    for(auto c : myStr){
        if(c != 'a' && c != 'b' && c != 'c'){
            s += c;
        }else if(s != ""){
            answer.push_back(s);
            s.clear();
        }
    }
    if(s != "") answer.push_back(s);
    if(answer.empty())  answer.push_back("EMPTY");
    return answer;
}