#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt = 0;
    for(auto x : myString){
        if(x == 'x'){
            answer.push_back(cnt);
            cnt = 0;
        }else   cnt++;
    }
    answer.push_back(cnt);
    return answer;
}