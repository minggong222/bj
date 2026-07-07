#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = -1;
    for(int i = 0; i < 500; i++){
        if(num == 1)    return i;
        if(num%2 == 1) num=num*3+1;
        else num=num/2;
    }
    return answer;
}