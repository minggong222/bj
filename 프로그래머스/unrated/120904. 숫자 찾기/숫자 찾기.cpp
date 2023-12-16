#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int a = 100000;
    int i = 1;
    while(true)
    {
        if(num >= a)
        {
            if((num/a)%10 == k)
                return i;
            if(a == 1)
                return -1;
            i++;
        }
        a = a/10 ;
    }
}