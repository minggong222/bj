#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> m;
    for(int i = 0; i < 26; i++){
        char c = 'A' + i;
        m[c] = 101;
    }
    for(auto s : keymap){
        for(int i = 0; i < s.size(); i++){
            m[s[i]] = min(m[s[i]], i+1);
        }
    }
    for(auto s : targets){
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(m[s[i]] == 101){
                cnt = -1;
                break;
            }
            cnt += m[s[i]];
        }
        answer.push_back(cnt);
    }
    return answer;
}