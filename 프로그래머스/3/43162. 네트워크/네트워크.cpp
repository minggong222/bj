#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visit(n, false);
    for(int i = 0; i < computers.size(); i++){
        if(visit[i])    continue;
        queue<int> q;
        q.push(i);
        visit[i] = true;
        answer++;
        while(!q.empty()){
            int now = q.front();
            q.pop();
            for(int j = 0; j < computers[now].size(); j++){
                if(computers[now][j] == 0)  continue;
                if(visit[j])    continue;
                q.push(j);
                visit[j] = true;
            }
        }
    }
    return answer;
}