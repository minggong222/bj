#include <string>
#include <vector>
#include <queue>
#include <map>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    map<int, int> m;
    for(int i = 0; i < operations.size(); i++){
        char q = operations[i][0];
        string n = operations[i].substr(2);
        if(q == 'I'){
            m[stoi(n)]++;
        }else if(m.size() > 0){
            if(n == "1"){
                m.erase(prev(m.end()));
            }else{
                m.erase(m.begin());
            }
        }
    }
    if(m.size() == 0){
        answer = {0,0};
    }else{
        answer = {prev(m.end())->first, m.begin()->first};
    }
    return answer;
}