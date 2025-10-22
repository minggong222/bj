#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    queue<int> q;
    for(int i = 0; i < players.size(); i++){
        while(1){
            int a = q.front();
            if(a != i){
                break;
            }
            q.pop();
        }
        while(q.size()*m + m <= players[i]){
            q.push(i+k);
            answer++;
        }
    }
    return answer;
}