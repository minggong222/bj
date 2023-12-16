#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    if(num%2 == 0)
    {
        for(int i = total/num - num/2 + 1; i <= total/num + num/2; i++)
        {
            answer.push_back(i);
        }
    }else{
        for(int i = total/num - num/2; i <= total/num + num/2; i++)
        {
            answer.push_back(i);
        }
    }
    return answer;
}