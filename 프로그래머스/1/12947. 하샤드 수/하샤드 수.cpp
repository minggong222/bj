#include <string>
#include <vector>

using namespace std;
int Hashad(int a)
{
    int z = 0;
    while(1)
    {
        z = z  + a % 10;
        if(a<10)
        {
                return z;
        }
        a = a/10;
    }
}
bool solution(int x) {
    if(x%Hashad(x) == 0)
        return true;
    else
        return false;
}