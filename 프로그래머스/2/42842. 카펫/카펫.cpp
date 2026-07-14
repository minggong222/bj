#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for(int i = 3; i <= sum; i++){
        if(sum % i == 0){
            if(brown + 4 == i*2 + (sum/i)*2){
                answer.push_back(sum/i);
                answer.push_back(i);
                break;
            }
        }
    }
    return answer;
}