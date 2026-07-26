#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    stack<pair<int,int>> s;
    for(int i = 0; i < prices.size(); i++){
        while(!s.empty()){
            if(s.top().first > prices[i]){
                answer[s.top().second] = i - s.top().second;
                s.pop();
            }else   break;
        }
        s.push({prices[i],i});
    }
    while(!s.empty()){
        answer[s.top().second] = prices.size() - s.top().second - 1;
        s.pop();
    }
    return answer;
}