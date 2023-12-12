#include <string>
#include <vector>
#include <cmath>
using namespace std;
string Binary(int a)
{
    string s = "";
    if(a/2 == 0)
    {
        s = a + 48;
        return s;
    }
    else
    {
        s = Binary(a/2);
        s.push_back(a%2 + 48);
        return s;
    }
}
int solution(int n) {
    int answer = n;
    int z = 0;
    string str = Binary(n);
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '1')
            z++;
    }
    while(1)
    {
        n++;
        int z1 = 0;
        str = Binary(n);
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '1')
                z1++;
        }
        if(z == z1)
            return n;
    }
}