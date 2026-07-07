#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    while(age){
        answer = (char)('a' + age%10) + answer;
        age /= 10;
    }
    return answer;
}