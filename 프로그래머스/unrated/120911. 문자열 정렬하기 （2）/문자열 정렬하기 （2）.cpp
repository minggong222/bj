#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto x: my_string)
    {
        if(65 <= x && 90 >= x)
            answer.push_back(x+32);
        else
            answer.push_back(x);
    }
    sort(answer.begin(),answer.end());
    return answer;
}