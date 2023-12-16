#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    for(auto x: operations){
        if(x[0] == 'I'){
            x.erase(x.begin(), x.begin()+1);
            int a = stoi(x);
            answer.push_back(a);
            sort(answer.begin(), answer.end());
        }else{
            if(!answer.empty()){
                if(x.size() == 3){
                    answer.erase(answer.end()-1,answer.end());
                }else{
                    answer.erase(answer.begin(),answer.begin()+1);
                }
            }
        }
    }
    if(answer.empty()){
        answer = {0,0};
    }else{
        int max = answer[answer.size()-1];
        int min = answer[0];
        answer = {max, min};
    }
    return answer;
}