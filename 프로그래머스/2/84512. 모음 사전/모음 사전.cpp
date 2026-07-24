#include <string>
#include <vector>
#include <queue>
using namespace std;
int answer;
bool dfs(string s, string word){
    answer++;
    bool sw = false;
    if(s == word)
        return true;
    if(s.size() == 5)   return false;
    sw = dfs(s+"A", word);
    if(sw)  return true;
    sw = dfs(s+"E", word);
    if(sw)  return true;
    sw = dfs(s+"I", word);
    if(sw)  return true;
    sw = dfs(s+"O", word);
    if(sw)  return true;
    sw = dfs(s+"U", word);
    if(sw)  return true;
    return false;
}
int solution(string word) {
    answer = -1;
    dfs("", word);
    return answer;
}