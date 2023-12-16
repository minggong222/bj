#include <string>
#include <vector>

using namespace std;
int i = 0;
int Qwe(string qu)
{
    int a = 0;
    int b = 1;
    while(true)
    {
        if(qu[i] == 45)
        {
            b = -1;
            i++;
        }
        if(qu[i] < 58 && qu[i] > 47)
        {
            a = a*10 + (qu[i]-48);
            i++;
        }else{
            i++;
            return a*b;
        }
    }
}

string Asd(string qu)
{
    int a = Qwe(qu);
    int b;
    if(qu[i] == 43)
    {
        i+=2;
        b = a + Qwe(qu);
    }else{
        i+=2;
        b = a - Qwe(qu);
    }
    i += 2;
    if(b == Qwe(qu))
    {
        return "O";
    }else{
        return "X";
    }
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(auto x: quiz)
    {
        i = 0;
        answer.push_back(Asd(x));
    }
    return answer;
}