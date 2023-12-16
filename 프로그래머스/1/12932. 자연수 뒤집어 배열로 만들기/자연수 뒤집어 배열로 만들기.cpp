#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(true)
    {
        answer.push_back(n%10);
        if(n<10)
        {
            return answer;
        }
        n = n/10;
    }
    return answer;
}