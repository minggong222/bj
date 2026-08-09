#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;
    for(auto s : completion){
        m[s]++;
    }
    for(auto s : participant){
        m[s]--;
        if(m[s] == -1){
            answer = s;
            break;
        }
    }
    return answer;
}