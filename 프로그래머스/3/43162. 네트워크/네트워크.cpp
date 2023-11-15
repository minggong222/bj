#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> c;
void dfs(int idx){
    c[idx][idx] = 0;
    for(int i = 0; i < c[idx].size(); i++){
        if(c[idx][i] == 1){
            c[idx][i] = 0;
            dfs(i);
        }
    }
    return;
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    c = computers;
    for(int i = 0; i < n; i++){
        if(find(c[i].begin(),c[i].end(),1) != c[i].end()){
            dfs(i);
            answer++;
        }
    }
    return answer;
}