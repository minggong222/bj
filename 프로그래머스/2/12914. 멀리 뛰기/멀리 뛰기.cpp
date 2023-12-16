#include <string>
#include <vector>

long long solution(int n) {
    long long n1 = 1;
    long long n2 = 2;
    long long n3 = 3;
    int i = 2;
    long long answer = 0;
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    while(1)
    {
        n3 = (n1 + n2)%1234567;
        n1 = n2%1234567;
        n2 = n3%1234567;
        i++;
        if(n == i)
            break;
    }
    return n3;
}