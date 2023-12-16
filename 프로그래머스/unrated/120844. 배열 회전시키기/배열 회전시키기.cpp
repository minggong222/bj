#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if(direction == "right")
    {
        for(int i = 0; i < numbers.size(); i++)
        {
            answer.push_back(numbers[(i + numbers.size()-1)%numbers.size()]);
        }
    }else{
        for(int i = 0; i < numbers.size(); i++)
        {
            answer.push_back(numbers[(i+1)%numbers.size()]);
        }
    }
    return answer;
}