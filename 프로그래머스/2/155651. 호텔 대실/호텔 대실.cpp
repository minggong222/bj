#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<vector<string>> book_time) {
    priority_queue<int> pq;
    int answer = 0;
    sort(book_time.begin(), book_time.end());
    for(int i = 0; i < book_time.size(); i++){
        int start = stoi(book_time[i][0].substr(0,2))*60 + stoi(book_time[i][0].substr(3));
        int end = stoi(book_time[i][1].substr(0,2))*60 + stoi(book_time[i][1].substr(3)) + 10;
        while(!pq.empty()){
            int time = -pq.top();
            if(time <= start)
                pq.pop();
            else{
                break;
            }
        }
        pq.push(-end);
        answer = max(answer, (int)pq.size());
    }
    return answer;
}