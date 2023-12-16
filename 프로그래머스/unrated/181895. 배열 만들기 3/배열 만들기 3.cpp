#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(auto x : intervals){
        for(int i = x[0]; i <= x[1]; i++){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}