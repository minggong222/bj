#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto q : queries){
        int m = 1000001;
        for(int i = q[0]; i <= q[1]; i++){
            if(arr[i] > q[2] && arr[i] < m)
                m = arr[i];
        }
        m == 1000001 ? answer.push_back(-1) : answer.push_back(m);
    }
    return answer;
}