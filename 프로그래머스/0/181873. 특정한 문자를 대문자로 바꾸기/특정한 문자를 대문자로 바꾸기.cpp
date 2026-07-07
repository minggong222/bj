#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = my_string;
    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == alp[0]){
            answer[i] = toupper(answer[i]);
        }
    }
    return answer;
}