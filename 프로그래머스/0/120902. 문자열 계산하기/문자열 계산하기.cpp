#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string str = "";
    string op = "+";
    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] == ' '){
            if(op == "+"){
                answer += stoi(str);
            }else{
                answer -= stoi(str);
            }
            str = "";
            op = my_string[i+1];
            i += 2;
        }else{
            str += my_string[i];
        }
    }
    if(op == "+"){
        answer += stoi(str);
    }else{
        answer -= stoi(str);
    }
    return answer;
}