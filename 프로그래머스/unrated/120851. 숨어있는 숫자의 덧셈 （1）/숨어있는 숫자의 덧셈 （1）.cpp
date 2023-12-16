#include <string>
#include <vector>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto x: my_string)
    {
        if(isdigit(x))
            answer += x-48;
    }
    return answer;
}