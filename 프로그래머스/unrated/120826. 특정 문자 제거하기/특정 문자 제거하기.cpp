#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(auto x : my_string)
    {
        if(letter[0] != x)
        {
            answer.push_back(x);
        }
    }
    return answer;
}