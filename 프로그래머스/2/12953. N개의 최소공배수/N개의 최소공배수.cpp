#include <string>
#include <vector>

using namespace std;
int Div(int a, int b)
{
    for(int i = a; i > 0; i--)
    {
        if(a%i ==0 && b%i ==0)
            return i;
    }
}
int Mul(int a, int b)
{
    return a*b/Div(a,b);
}
int solution(vector<int> arr) {
    int answer = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        answer = Mul(answer,arr[i]);
    }
    return answer;
}