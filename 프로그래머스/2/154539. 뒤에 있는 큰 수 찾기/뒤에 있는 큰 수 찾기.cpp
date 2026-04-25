#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    stack<pair<int,int>> q;
    vector<int> answer(numbers.size());
    int idx = 0;
    while(idx < numbers.size()){
        while(!q.empty()){
            if(q.top().first < numbers[idx]){
                int i = q.top().second;
                q.pop();
                answer[i] = numbers[idx];
            }else{
                break;
            }
        }
        q.push({numbers[idx],idx});
        idx++;
    }
    while(!q.empty()){
        int i = q.top().second;
        q.pop();
        answer[i] = -1;
    }
    return answer;
}