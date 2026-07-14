#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size(), 1);
    vector<int> v;
    for(auto x : score){
        v.push_back(x[0]+x[1]);
    }
    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer.size(); j++){
            if(v[i] < v[j]) answer[i]++;
        }
    }
    return answer;
}