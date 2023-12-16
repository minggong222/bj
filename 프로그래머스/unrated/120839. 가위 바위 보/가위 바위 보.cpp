#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(auto x:rsp)
    {
        if(x == '0')
            answer.push_back('5');
        else if(x == '5')
            answer.push_back('2');
        else
            answer.push_back('0');
    }
    return answer;
}