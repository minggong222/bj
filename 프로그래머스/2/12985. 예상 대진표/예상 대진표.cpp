#include <iostream>
#include <cstdlib>
using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    if(abs(a-b) == 1 && abs(a/2 - b/2) == 1)
            return answer;
    while(1)
    {
        if(a%2 == 1)
            a = a/2 +1;
        else
            a = a/2;
        
        if(b%2 == 1)
            b = b/2 + 1;
        else
            b = b/2;
        answer++;
        if(answer == n-1)
            return answer;
        if(abs(a-b) == 1 && abs(a/2 - b/2) == 1)
            return answer;
    }
}