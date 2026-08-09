#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmd(string a, string b){
    return a+b > b+a;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    for(auto x : numbers){
        v.push_back(to_string(x));
    }
    sort(v.begin(),v.end(), cmd);
    for(auto x : v){
        answer += x;
    }
    for(auto x : answer){
        if(x != '0')
            return answer;
    }
    answer = "0";
    return answer;
}