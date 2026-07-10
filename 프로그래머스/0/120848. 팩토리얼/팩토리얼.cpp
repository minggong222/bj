#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int mul = 1;
    int idx = 1;
    while(1){
        if(mul*idx > n){
            return idx - 1;
        }
        mul *= idx;
        idx++;
    }
    return answer;
}