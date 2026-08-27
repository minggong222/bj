#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> q;
    for(int i = 0; i < bridge_length; i++){
        q.push(0);
    }
    int sum = 0;
    int idx = 0;
    while(idx < truck_weights.size()){
        int m = q.front();
        q.pop();
        sum -= m;
        if(sum + truck_weights[idx] <= weight){
            q.push(truck_weights[idx]);
            sum += truck_weights[idx];
            idx++;
        }else{
            q.push(0);
        }
        answer++;
    }
    while(1){
        sum -= q.front();
        q.pop();
        answer++;
        if(sum == 0)    break;
    }
    return answer;
}