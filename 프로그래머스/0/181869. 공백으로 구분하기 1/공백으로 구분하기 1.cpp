#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string str = "";
    for(auto x : my_string){
        if(x == ' '){
            answer.push_back(str);
            str = "";
        }else{
            str += x;
        }
    }
    answer.push_back(str);
    return answer;
}