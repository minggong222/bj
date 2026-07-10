#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> m;
    for(auto c : s){
        m[c]++;
    }
    for(auto iter = m.begin(); iter != m.end(); iter++){
        if(iter->second == 1) answer += iter->first;
    }
    return answer;
}