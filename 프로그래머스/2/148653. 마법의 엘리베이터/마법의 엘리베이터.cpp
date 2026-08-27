#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(int storey) {
    int answer = 100000000;
    stack<pair<int,int>> s;
    s.push({storey,0});
    while(!s.empty()){
        int x = s.top().first;
        int y = s.top().second;
        s.pop();
        if(y >= answer) continue;
        if(x == 0){
            answer = min(answer, y);
            continue;
        }
        s.push({x/10, y + x%10});
        s.push({x/10 + 1, y + (10 - x%10)});
    }
    return answer;
}