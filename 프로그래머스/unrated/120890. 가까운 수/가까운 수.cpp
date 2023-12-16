#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 100;
    int a = 100;
    for(auto x : array)
    {
        if(x - n >= 0)
        {
            if(x-n == a)
            {
                if(answer > x)
                    answer = x;
            }else{
                if(x-n < a)
                {
                    a = x-n;
                    answer = x;
                }
            }
        }
        else
        {
            if(n-x == a)
            {
                if(answer > x)
                    answer = x;
            }else{
                if(n-x < a)
                {
                    a = n-x;
                    answer = x;
                }
            }
        }
    }
    return answer;
}