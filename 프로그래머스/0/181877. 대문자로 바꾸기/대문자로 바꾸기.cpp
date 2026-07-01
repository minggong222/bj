#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(int i = 0; i < answer.size(); i++){
        answer[i] = toupper(answer[i]);
    }
    return answer;
}