#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    priority_queue<int> pq1, pq2;
    for(int i = 0; i < lost.size(); i++){
        for(int j = 0; j < reserve.size(); j++){
            if(lost[i] == reserve[j]){
                lost.erase(lost.begin() + i);
                reserve.erase(reserve.begin() + j);
                i--;
                answer++;
                break;
            }
        }
    }
    for(auto x : lost){
        pq1.push(x);
    }
    for(auto x : reserve){
        pq2.push(x);
    }
    while(!pq1.empty() && !pq2.empty()){
        if(abs(pq1.top() - pq2.top()) <= 1){
            answer++;
            pq1.pop();
            pq2.pop();
            continue;
        }
        if(pq1.top() < pq2.top()){
            pq2.pop();
        }else{
            pq1.pop();
        }
    }
    return answer;
}