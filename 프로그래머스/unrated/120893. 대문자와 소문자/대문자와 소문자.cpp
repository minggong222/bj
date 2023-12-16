#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto x: my_string)
    {
        if(65 <= x && 90 >= x)
        {
            answer.push_back(x+32);
        }
        else if(97 <= x && 122 >= x)
        {
            answer.push_back(x-32);
        }
    }
    return answer;
}