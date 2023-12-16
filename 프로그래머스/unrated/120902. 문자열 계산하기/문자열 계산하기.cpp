#include <string>
#include <vector>

using namespace std;
int i = 0;
int a = 0;
int Qwe(string asd)
{
    int a = 0;
    while(true)
    {
        if(i < asd.size())
        {
            if(asd[i] > 47 && asd[i] < 58)
            {
                a = a*10 + asd[i] - 48;
                i++;
            }else
                return a;
        }else
                return a;
    }
}
int Cal(string asd)
{
    while(true)
    {
        if(i < asd.size())
        {
            if(asd[i+1] == '+')
            {
                i = i+3;
                a = a + Qwe(asd);
            }else if(asd[i+1] == '-')
            {
                i = i+3;
                a = a - Qwe(asd);
            }
        }else
            {
                return a;
            }
    }
}
int solution(string my_string) {
    a = Qwe(my_string);
    return Cal(my_string);
}