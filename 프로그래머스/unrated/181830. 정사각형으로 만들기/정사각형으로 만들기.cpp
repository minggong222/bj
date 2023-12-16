#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer = arr;
    int idx1 = arr.size(), idx2 = arr[0].size();
    if(idx1 == idx2)
        return answer;
    if(idx1 > idx2){
        for(int k = 0; k < idx1; k++)
            for(int i = idx2;i < idx1; i++)
                answer[k].push_back(0);
    }else{
        for(int i = idx1; i < idx2; i++)
            answer.push_back(vector<int>(idx2,0));
    }
    return answer;
}