#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i = 1; i < 10; i++)
    {
        int sw = 0;
        for(auto x: numbers)
        {
            if(x == i)
                sw = 1;
        }
        if(sw == 0)
            answer += i;
    }
    return answer;
}