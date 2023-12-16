#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    int a = 1000;
    while(true)
    {
        if(age/a != 0)
        {
            answer.push_back((age/a)%10 + 97);
        }
        if(a == 1)
            return answer;
        a = a/10;
    }
}