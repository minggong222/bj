#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char c;
    int fcnt = 0;
    int scnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(fcnt == 0){
            c = s[i];
            fcnt++;
            continue;
        }
        if(c == s[i]){
            fcnt++;
        }else{
            scnt++;
        }
        if(fcnt == scnt){
            fcnt = 0;
            scnt = 0;
            answer++;
        }
    }
    if(fcnt != 0)   answer++;
    return answer;
}