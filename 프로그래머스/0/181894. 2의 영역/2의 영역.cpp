#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int m = -1, M = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2){
            if(m == -1){
                m = i;
            }
            M = i;
        }
    }
    if(m != -1){
        for(int i = m; i <= M; i++){
            answer.push_back(arr[i]);
        }
    }else{
        answer = {-1};
    }
    return answer;
}