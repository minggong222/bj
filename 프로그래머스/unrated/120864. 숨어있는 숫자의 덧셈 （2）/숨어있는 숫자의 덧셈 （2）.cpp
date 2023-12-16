#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int a = 0;
    for(int i = 0; i < my_string.size() ; i++)
    {
        if(my_string[i] > 47 && my_string[i] < 58)
        {
            a = a*10 + (my_string[i] - 48);
        }else{
            answer += a;
            a = 0;
        }
    }
    answer += a;
    return answer;
}