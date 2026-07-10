#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    for(int i = n; i >0; i--){
        if(n%i == 0 && m%i == 0){
            answer.push_back(i);
            break;
        }
    }
    int idx = n;
    while(1){
        if(idx%n == 0 && idx%m == 0){
            answer.push_back(idx);
            break;
        }
        idx++;
    }
    return answer;
}