#include <string>
#include <vector>
int i = 0;
using namespace std;
int Qwe(string a)
{
    int x = 0;
    while(true)
    {
        if(i < a.size())
        {
            if(a[i] < 58 && a[i] > 47)
            {
                x = x*10 + a[i] - 48;
                i++;
            }
            else
                return x;
        }else return x;
    }
}
string solution(string polynomial) {
    string answer;
    int x = 0;
    int y = 0;
    while(true)
    {
        int z = 0;
        if(i < polynomial.size())
        {
            if(polynomial[i] < 58 && polynomial[i] > 47)
            {
                z = Qwe(polynomial);
                if(polynomial[i] == 'x')
                {
                    x += z;
                    i = i + 4;
                }else
                {
                    y += z;
                    i = i + 3;
                }
            }else{
                x++;
                i = i + 4;
            }
        }else
        {
            if(x != 0 && x!= 1&& y != 0)
                answer = to_string(x) + "x + " + to_string(y);
            else if(x != 0 && x!=1)
                answer = to_string(x) + "x";
            else if(x!=0&&y!=0)
                answer = "x + " + to_string(y);
            else if(x!= 1&& y != 0)
                answer = to_string(y);
            else if (x == 1 && y == 0)
                answer = "x";
            return answer;
        }
    }
}