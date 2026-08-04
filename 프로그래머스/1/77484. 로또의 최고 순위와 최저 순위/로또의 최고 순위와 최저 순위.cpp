#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    set<int> s;
    for(auto x : win_nums){
        s.insert(x);
    }
    int cnt = 0, zcnt = 0;
    for(auto x : lottos){
        if(x == 0){
            zcnt++;
        }else{
            if(s.find(x) != s.end()){
                cnt++;
            }
        }
    }
    answer.push_back(min(7-(cnt+zcnt), 6));
    answer.push_back(min(7-cnt,6));
    return answer;
}