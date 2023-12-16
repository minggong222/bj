#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for(auto x: my_string){
        if(x == alp[0])
            answer += toupper(x);
        else
            answer += x;
    }
    return answer;
}