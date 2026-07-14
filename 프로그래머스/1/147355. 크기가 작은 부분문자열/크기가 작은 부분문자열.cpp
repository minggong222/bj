#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string str = t.substr(0, p.size());
    if(stoll(str) <= stoll(p))   answer++;
    for(int i = p.size(); i < t.size(); i++){
        str = str.substr(1) + t[i];
        if(stoll(str) <= stoll(p))   answer++;
    }
    return answer;
}