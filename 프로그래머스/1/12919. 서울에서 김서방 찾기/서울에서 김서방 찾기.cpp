#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    int i = 0;
    for(auto x: seoul)
    {
        if(x == "Kim")
        {
            break;
        }
        i++;
    }
    string str = to_string(i);
    answer += str;
    answer += "에 있다";
    return answer;
}