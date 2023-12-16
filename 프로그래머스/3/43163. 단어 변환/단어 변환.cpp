#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
int answer = 51;
unordered_set<string> s;
void dfs(string begin, string target, vector<string> words, int a){
    if(a == answer || a == 51)
        return;
    if(begin == target)
        answer = min(answer, a);
    for(int i = 0; i < words.size(); i++){
        int cnt = 0;
        if(words[i] != begin && s.find(words[i]) == s.end()){
            for(int j = 0; j < begin.size(); j++){
                if(begin[j] != words[i][j])
                    cnt++;
            }
            if(cnt == 1){
                s.insert(words[i]);
                dfs(words[i], target, words, a+1);
                s.erase(words[i]);
            }
        }
    }
    return;
}
int solution(string begin, string target, vector<string> words) {
    dfs(begin, target, words, 0);
    if(answer == 51)    answer = 0;
    return answer;
}