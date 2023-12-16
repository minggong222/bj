#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for(auto x : queries){
        for(int i = x[0]; i <= x[1]; i++){
            if(i%x[2] == 0)
                answer[i]++;
        }
    }
    return answer;
}