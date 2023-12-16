#include <string>
#include <vector>
#include <iostream>
using namespace std;
char q[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
string Trans(int a, int n)
{
    string s ="";
    if(a < n)
    {
        s = q[a];
        return s;
    }else{
        s = q[a%n];
        a = a/n;
        return Trans(a,n) + s;
    }
}
string solution(int n, int t, int m, int p) {
    string answer = "";
    string answer2 = "";
    for(int i = 0; answer.size() <= t*m; i++)
        answer += Trans(i,n);
    for(int i = 0; i < t; i++)
    {
        answer2 += answer[i*m+p - 1];
    }
    return answer2;
}