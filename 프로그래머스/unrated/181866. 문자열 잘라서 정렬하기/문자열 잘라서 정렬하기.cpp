#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b){
    return a < b;
}
vector<string> solution(string myString) {
    vector<string> answer;
    string a = "";
    for(auto x : myString){
        if(x != 'x'){
            a += x;
        }else{
            if(a != "")
                answer.push_back(a);
            a = "";
        }
    }
    if(a != "")
        answer.push_back(a);
    sort(answer.begin(),answer.end(),cmp);
    return answer;
}