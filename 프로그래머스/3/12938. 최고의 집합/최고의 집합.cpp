#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    if(s < n)   return {-1};
    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        pq.push(-(s/n));
    }
    int cnt = (s/n)*n;
    while(cnt != s){
        int x = pq.top()-1;
        pq.pop();
        pq.push(x);
        cnt++;
    }
    while(!pq.empty()){
        answer.push_back(-pq.top());
        pq.pop();
    }
    return answer;
}