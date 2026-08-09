#include <string>
#include <vector>
#include <map>
#include <queue>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<char,int> m;
    priority_queue<int> pq;
    for(auto x : X){
        m[x]++;
    }
    for(auto y : Y){
        if(m[y] > 0){
            pq.push((y-'0'));
        }
        m[y]--;
    }
    if(pq.empty())  return "-1";
    else{
        while(!pq.empty()){
            answer += to_string(pq.top());
            pq.pop();
        }
    }
    for(auto x : answer){
        if(x != '0')    return answer;
    }
    answer = "0";
    return answer;
}