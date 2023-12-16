#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(auto x : array)
    {
        while(true)
        {
            if(x%10 == 7)
                answer++;
            x = x/10;
            if(x < 1)
                break;
        }
    }
    return answer;
}