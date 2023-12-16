#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    for(auto x : s)
    {
        if(x > 47 && x < 58)
            answer = answer*10 + x - 48;
    }
    if(s[0] == '-')
        return -answer;
    else
        return answer;
}