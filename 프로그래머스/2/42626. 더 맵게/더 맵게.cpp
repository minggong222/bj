#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<long long> pq;
    for(auto x : scoville){
        pq.push(-x);
    }
    while(!pq.empty()){
        if(-pq.top() >= K){
            return answer;
        }
        if(pq.size() < 2)   break;
        long long a = -pq.top();
        pq.pop();
        long long b = -pq.top();
        pq.pop();
        pq.push(-(a+b*2));
        answer++;
    }
    return -1;
}