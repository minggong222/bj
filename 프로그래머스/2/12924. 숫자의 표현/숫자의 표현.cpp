#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int j = 1;
    if(n == 1)
        return 1;
    while(1)
    {
        int a = 0;
        for(int i = j; i <= n; i++)
        {
            a += i;
            if(a == n)
            {
                answer++;
                j++;
                break;
            }else if(a > n)
            {
                j++;
                break;
            }
        }
        if(j >= n/2+1)
            break;
    }
    return answer;
}
