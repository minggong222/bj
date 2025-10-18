#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    for(int i = 0; i < schedules.size(); i++){
        int time = schedules[i]/100*60 + schedules[i]%100;
        int day = startday - 1;
        bool sw = true;
        for(int j = 0; j < 7; j++){
            day++;
            if(day%7 == 6 || day%7 == 0)    continue;
            
            int now = timelogs[i][j]/100*60 + timelogs[i][j]%100;
            if(now <= time + 10) continue;
            
            sw = false;
            break;
        }
        if(sw)  answer++;
        
    }
    return answer;
}