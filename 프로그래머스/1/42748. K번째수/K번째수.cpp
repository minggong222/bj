#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto x : commands){
        priority_queue<int> pq;
        for(int i = x[0] - 1; i < x[1]; i++){
            pq.push(-array[i]);
        }
        for(int i = 1; i < x[2]; i++)   pq.pop();
        answer.push_back(-pq.top());
    }
    return answer;
}