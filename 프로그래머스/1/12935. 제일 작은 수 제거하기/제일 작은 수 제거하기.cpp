#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int m = arr[0];
    int idx = 0;
    for(int i = 0; i < arr.size(); i++){
        if(m > arr[i]){
            m = arr[i];
            idx = i;
        }
    }
    answer.erase(answer.begin()+idx);
    return answer.empty() ? vector<int>(1,-1) : answer;
}