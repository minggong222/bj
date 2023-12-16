#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;
   queue<int> q;
    for(int i = 0; i < stations.size(); i++){
        q.push(stations[i]);
    }
    for(int i = 0; i < n;){
        if(i < q.front() + w && i >= q.front() - 1 - w){
            i = q.front() + w;
            q.pop();
        }else{
            i = i + w + w + 1;
            answer++;
        }
    }
    return answer;
}