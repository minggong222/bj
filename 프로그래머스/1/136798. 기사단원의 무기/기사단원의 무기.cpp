#include <string>
#include <vector>

using namespace std;
int Asd(int n)
{
    int a = 1;
    for(int i = 1; i <= n/2; i++)
    {
        if(n%i == 0)
            a++;
    }
    return a;
}
int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1; i <= number; i++)
    {
        int z = Asd(i);
        if(z > limit)
            answer += power;
        else
            answer += z;
    }
    return answer;
}