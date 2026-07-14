#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    while(arr[0].size() < arr.size()){
        for(int i = 0; i < arr.size(); i++){
            arr[i].push_back(0);
        }
    }
    while(arr.size() < arr[0].size()){
        arr.push_back(vector<int>(arr[0].size(), 0));
    }
    return arr;
}