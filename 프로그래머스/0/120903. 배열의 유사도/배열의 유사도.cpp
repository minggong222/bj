#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    set<string> s;
    for(int i = 0; i < s1.size(); i++){
        s.insert(s1[i]);
    }
    for(int i = 0; i < s2.size(); i++){
        if(s.find(s2[i]) != s.end())
            answer++;
    }
    return answer;
}