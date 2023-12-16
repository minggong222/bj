#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int temp = 1;
    for(int i = 1; i <= a; i++)
    {
        if(a%i == 0 && b%i ==0)
            temp = i;
    }
    b = b/temp;
    while(true)
    {
        if(b%2 == 0)
        {
            b = b/2;
        }
        if(b%5 == 0)
            b = b/5;
        if(b%2 != 0 && b%5 != 0 && b > 1)
            return 2;
        if(b == 1)
            return 1;
    }
    return answer;
}