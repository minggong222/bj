#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<pair<int,int>> q;
    q.push({numbers[0], 1});
    q.push({-numbers[0], 1});

    while(!q.empty()){
        int x = q.front().first;
        int idx = q.front().second;
        q.pop();
        if(idx == numbers.size()){
            if(x == target){
                answer++;
            }
        }else{
            q.push({x+numbers[idx], idx+1});
            q.push({x-numbers[idx], idx+1});
        }
    }
    return answer;
}