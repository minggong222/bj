#include <string>
#include <vector>
#include <queue>
using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> q;
    for(auto x : works){
        q.push(x);
    }
    while(n--){
        int x = q.top();
        q.pop();
        q.push(x-1);
    }
    while(!q.empty()){
        int x = max(0, q.top());
        q.pop();
        answer += x*x;
    }
    return answer;
}