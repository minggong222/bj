#include <string>
#include <vector>
#include <set>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    set<char> S;
    for(auto c : skip){
        S.insert(c);
    }
    for(int i = 0; i < s.size(); i++){
        int cnt = 0;
        int idx = s[i] - 'a';
        while(cnt != index){
            idx++;
            idx%=26;
            if(S.find('a'+idx) == S.end()){
                cnt++;
            }
        }
        answer += 'a'+idx;
    }
    return answer;
}