#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long num2 = num;
    if(num == 1)
        return 0;
    while(1)
    {
        if(num2%2 == 0)
        {
            num2 = num2/2;
            answer++;
        }else{
            num2 = num2*3 +1;
            answer++;
        }
        if(answer == 500) return -1;
        if(num2 == 1)
             return answer;
    }
}