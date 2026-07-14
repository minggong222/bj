#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    vector<int> v = {5};
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= l && v[i] <= r){
            answer.push_back(v[i]);
        }
        if(v[i] > r)    break;
        v.push_back(v[i]*10);
        v.push_back(v[i]*10+5);
    }
    if(answer.empty())  answer.push_back(-1);
    return answer;
}