#include <string>
#include <vector>
#include <cmath>
using namespace std;
string Asd(int a, int b)
{
    string z = "";
    if(a < b)
    {
        z.push_back(a+48);
        return z;
    }
    else
    {
        z.push_back(a%b + 48);
        return Asd(a/b, b) + z;
    }
}
int solution(int n, int k) {
    int answer = 0;
    string a = Asd(n,k);
    long asd = 0;
    int i;
    for(i = 0; i < a.size(); i++)
    {
        if(a[i] == '0')
        {
            if(asd == 1 || asd == 0)
            {
                answer--;
            }
            for(int j = 2; j <= sqrt(asd); j++)
            {
                if(asd%j == 0)
                {
                    answer--;
                    break;
                }
            }
            answer++;
            asd = 0;
        }
        else{
            asd = asd*10 + a[i] - 48;
        }
            
    }
    if(a[i-1] != '0')
    {
        if(asd == 1 || asd == 0)
            {
                answer--;
            }
            for(int j = 2; j <= sqrt(asd); j++)
            {
                if(asd%j == 0)
                {
                    answer--;
                    break;
                }
            }
            answer++;
            asd = 0;
    }
    
    return answer;
}