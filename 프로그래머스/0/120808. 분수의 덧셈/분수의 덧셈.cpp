#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer = {numer1*denom2 + numer2*denom1, denom1*denom2};
    int a = 2;
    while(1){
        if(answer[0] < a || answer[1] < a)    break;
        if(answer[0] % a == 0 && answer[1] % a == 0){
            answer[0] /= a;
            answer[1] /= a;
        }else{
            a++;
        }
    }
    return answer;
}