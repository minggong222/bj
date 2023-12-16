#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto x:myString){
        if(x == 'a' || x == 'A'){
            answer += toupper(x);
        }else{
            answer += tolower(x);
        }
    }
    return answer;
}