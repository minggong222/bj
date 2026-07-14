#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    set<int> s;
    for(int i = 0; i < arr.size(); i++){
        if(s.find(arr[i]) == s.end()){
            answer.push_back(arr[i]);
            s.insert(arr[i]);
        }
        if(answer.size() == k)  break;
    }
    while(answer.size() < k){
        answer.push_back(-1);
    }
    return answer;
}