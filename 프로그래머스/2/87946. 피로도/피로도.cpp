#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int f(int k, vector<vector<int>> v, vector<bool> visit, int cnt){
    int m = cnt;
    for(int i = 0; i < v.size(); i++){
        if(visit[i] || k < v[i][0]) continue;
        visit[i] = true;
        m = max(m, f(k-v[i][1], v, visit, cnt+1));
        visit[i] = false;
    }
    return m;
}
int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<bool> visit(dungeons.size(), false);
    return f(k, dungeons, visit, 0);
}