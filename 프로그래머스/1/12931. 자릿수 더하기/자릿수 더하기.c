#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    while(true)
    {
        answer += n%10;
        if(n < 10)
            return answer;
        n = n/10;
    }
    return answer;
}