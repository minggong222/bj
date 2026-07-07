#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    while(1){
        answer.push_back(n);
        if(n == 1)  break;
        if(n%2){
            n = 3*n+1;
        }else{
            n = n/2;
        }
    }
    return answer;
}