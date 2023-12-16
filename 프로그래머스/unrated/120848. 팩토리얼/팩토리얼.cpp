#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int i = 1;
    while(true)
    {
        i++;
        if(answer <= n)
        {
            answer = answer*i;
        }else{
            return i-2;
        }
    }
}