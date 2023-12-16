#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int i = 0; i < code.size(); i++){
        if(!mode){
            if(code[i] != '1'){ 
                if(i%2 == 0)
                    answer.push_back(code[i]);
            }else mode = true;
        }else{
            if(code[i] != '1'){
                if(i%2 == 1) answer.push_back(code[i]);
            }else mode = false;
        }
    }
    if(answer == "") answer = "EMPTY";
    return answer;
}