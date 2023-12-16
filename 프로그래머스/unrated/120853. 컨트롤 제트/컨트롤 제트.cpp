#include <string>
#include <vector>

using namespace std;
int i = 0;
int Qwe(string a)
{
    int x = 0;
    while(true)
    {
        if(a[i] != ' ' && i < a.size())
        {
            x = x*10 + (a[i]-48);
        }else{
            return x;
        }
        i++;
    }
}
int solution(string s) {
    int answer = 0;
    int temp = 0;
    int asd = 1;
    while(true)
    {
        if(s[i] == '-')
        {
            i++;
            asd = -1;
        }else{
            asd = 1;
        }
        if(s[i] < 58 && s[i] > 47)
        {
            temp = asd*Qwe(s);
            answer += temp;
        }
        if(s[i] == 90)
        {
            answer -= temp;
            i = i++;
        }
        i++;
        if(i > s.size())
            return answer;
    }
    return answer;
}