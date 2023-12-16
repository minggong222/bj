#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -100000000;
    for(int i = numbers.size()-1 ;i>0;i--)
        for(int j = i-1; j >=0 ;j--)
        {
            if(numbers[j]*numbers[i] > answer)
                answer = numbers[j]*numbers[i];
        }
    return answer;
}