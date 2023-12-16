#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto x : my_string)
    {
        if(x != 'a' &&x != 'e' &&x != 'i' &&x != 'o' &&x != 'u')
            answer.push_back(x);
    }
    return answer;
}