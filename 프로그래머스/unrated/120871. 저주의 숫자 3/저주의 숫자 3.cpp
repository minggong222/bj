#include <string>
#include <vector>

using namespace std;

int Qwe(int a)
{
    while(true)
    {
        if((a%10)/3 == 1 && (a % 10) % 3 == 0)
            return 0;
        if(a < 10)
            return 1;
        a = a/10;
    }
}
int solution(int n) {
    int i = 1;
    int n2 = 0;
    while(true)
    {
        if(i%3 == 0)
        {
            i++;
        }else{
            if(Qwe(i) == 0)
                i++;
            else
            {
                n2++;
                if(n2 == n)
                    return i;
                i++;
            }
        }
    }
}