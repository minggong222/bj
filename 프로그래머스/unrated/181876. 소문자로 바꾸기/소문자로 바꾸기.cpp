#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto x: myString){
        answer += tolower(x);
    }
    return answer;
}