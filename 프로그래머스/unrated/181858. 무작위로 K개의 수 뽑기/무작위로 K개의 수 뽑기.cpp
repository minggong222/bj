#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(auto x : arr){
        if(find(answer.begin(),answer.end(),x) == answer.end()){
            answer.push_back(x);
            if(answer.size() == k)
                return answer;
        }
    }
    for(int i = answer.size(); i < k; i++)
        answer.push_back(-1);
    return answer;
}