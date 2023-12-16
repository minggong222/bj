#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(char a, char b)
{ return (a > b); }
string solution(string X, string Y) {
    string answer = "";
    vector<int> a(10, 0);
    vector<int> b(10, 0);
    int i = 0;
    int xs = X.size();
    int ys = Y.size();
    while(1)
    {
        if(ys <= i && xs <= i)
            break;
        if(xs > i)
            a[X[i] - 48]++;
        if(ys > i)
            b[Y[i] - 48]++;
        i++;
    }
    i = 9;
    while(1)
    {
        while(1)
        {
            if(a[i] > 0 && b[i] > 0)
            {
                answer.push_back(i + 48);
                a[i]--;
                b[i]--;
            }
            else
                break;
        }
        if(i == 0)
            break;
        i--;
    }
    if(answer.size() == 0)
        return "-1";
    else if(answer[0] == '0')
        return "0";
    return answer;
}