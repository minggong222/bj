#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    string str = "";
    vector<int> v;
    for(auto c : s){
        if(c == ' '){
            v.push_back(stoi(str));
            str = "";
        }else{
            str += c;
        }
    }
    v.push_back(stoi(str));
    sort(v.begin(), v.end());
    answer += to_string(v[0]);
    answer += " ";
    answer += to_string(v.back());
    return answer;
}