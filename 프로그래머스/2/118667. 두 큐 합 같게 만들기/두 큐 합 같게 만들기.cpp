#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    long long sum1 = 0, sum2 = 0;
    queue<int> q1, q2;
    for(auto x : queue1){
        sum1 += x;
        q1.push(x);
    }
    for(auto x : queue2){
        sum2 += x;
        q2.push(x);
    }
    
    while(sum1 != sum2){
        if(sum1 < sum2){
            int x = q2.front();
            q2.pop();
            q1.push(x);
            sum1 += x;
            sum2 -= x;
        }else if(sum1 > sum2){
            int x = q1.front();
            q1.pop();
            q2.push(x);
            sum2 += x;
            sum1 -= x;
        }else if(sum1 == sum2){
            break;
        }
        if(sum1 == 0 || sum2 == 0 || answer >= 600001){
            answer = -1;
            break;
        }
        answer++;
    }
    return answer;
}