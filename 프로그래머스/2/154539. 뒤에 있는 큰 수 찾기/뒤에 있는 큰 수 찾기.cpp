#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    stack<pair<int,int>> s;
    for(int i = 0; i < numbers.size(); i++){
        while(!s.empty()){
            if(s.top().first < numbers[i]){
                answer[s.top().second] = numbers[i];
                s.pop();
            }else{
                break;
            }
        }
        s.push({numbers[i], i});
    }
    return answer;
}