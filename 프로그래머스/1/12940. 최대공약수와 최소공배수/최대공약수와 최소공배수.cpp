#include <string>
#include <vector>

using namespace std;
int Div(int a, int b)
{
    int c;
    while(b != 0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}
int Mul(int a, int b)
{
    return a*b/Div(a,b);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    if(n > m)
    {
        answer.push_back(Div(n,m));
        answer.push_back(Mul(n,m));
    }else{
        answer.push_back(Div(m,n));
        answer.push_back(Mul(m,n));
    }
    return answer;
}