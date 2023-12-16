#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto x : scoville){
        pq.push(x);
    }
    int a;
    while(pq.top() < K){
        a = pq.top();
        pq.pop();
        if(pq.empty())
            return -1;
        a = a + pq.top()*2;
        pq.pop();
        pq.push(a);
        answer++;
    }
    return answer;
}