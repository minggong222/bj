#include <string>
#include <vector>
using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    int a = 0;
    int now = num;
        a = w*2 - (2*((num  - 1) % w + 1) - 1);
    
    while(1){
        answer++;
        now += a;
        a = w*2 - a;
        if(now > n)
            break;
    }
    return answer;
}