#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;
    for(int i = idx; i < arr.size(); i++){
        if(arr[i]){
            answer = i;
            break;
        }
    }
    return answer;
}