#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int a = -1;
    int cnt = 0;
    map<int, int> m;
    for(auto x : array){
        m[x]++;
    }
    for(auto iter = m.begin(); iter != m.end(); iter++){
        if(iter->second == cnt){
            answer = -1;
        }else if(iter->second > cnt){
            answer = iter->first;
            cnt = iter->second;
        }
    }
    return answer;
}