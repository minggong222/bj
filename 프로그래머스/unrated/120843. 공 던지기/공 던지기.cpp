#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = -1;
    for(int i = 0; i < k;i++)
    {
        if(answer == numbers.size())
        {
            answer = 2;
        }else{
            answer += 2;
            if(answer > numbers.size())
            {
                answer = 1;
            }
        }
    }
    return answer;
}