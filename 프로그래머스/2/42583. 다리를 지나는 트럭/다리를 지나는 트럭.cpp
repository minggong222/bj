#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int w = 0;
    int i = 0;
    queue<int> q;
    for(int i = 0; i < bridge_length; i++){
        q.push(0);
    }
    do{
        if(q.front() != 0){
            w -= q.front();
        }
        q.pop();
        if(i < truck_weights.size() && w + truck_weights[i] <= weight)         {
            q.push(truck_weights[i++]);
            w += q.back();
        }else{
            q.push(0);
        }
        answer++;
    }while(w > 0);
    return answer;
}