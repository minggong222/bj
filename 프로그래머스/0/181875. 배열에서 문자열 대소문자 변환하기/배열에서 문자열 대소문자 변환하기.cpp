#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer(strArr.size());
    for(int i = 0; i < strArr.size(); i+=2){
        string s = "";
        for(auto x : strArr[i]){
            s += tolower(x);
        }
        answer[i] = s;
    }
    for(int i = 1; i < strArr.size(); i+=2){
        string s = "";
        for(auto x : strArr[i]){
            s += toupper(x);
        }
        answer[i] = s;
    }
    return answer;
}