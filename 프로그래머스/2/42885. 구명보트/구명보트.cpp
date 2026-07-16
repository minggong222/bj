#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    priority_queue<int> pq1,pq2;
    for(auto a : people){
        pq1.push(a);
        pq2.push(-a);
    }
    int cnt = people.size();
    while(cnt > 0){
        if(pq1.top() + (-pq2.top()) <= limit){
            pq1.pop();
            pq2.pop();
            cnt -= 2;
            answer++;
        }else{
            pq1.pop();
            cnt--;
            answer++;
        }
    }
    return answer;
}