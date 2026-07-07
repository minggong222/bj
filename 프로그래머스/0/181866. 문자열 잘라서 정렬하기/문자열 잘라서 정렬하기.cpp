#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string str = "";
    for(auto x : myString){
        if(x == 'x'){
            if(str != "")
                answer.push_back(str);
            str = "";
        }else{
            str += x;
        }
    }
    if(str != "")
        answer.push_back(str);
    sort(answer.begin(), answer.end());
    return answer;
}