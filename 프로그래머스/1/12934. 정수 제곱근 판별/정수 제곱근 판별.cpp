#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long idx = 1;
    while(1){
        if(pow(idx, 2) > n) break;
        if(pow(idx, 2) == n){
            answer = pow(idx+1,2);
            break;
        }
        idx++;
    }
    return answer;
}