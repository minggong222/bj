#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, char> m = { 
        {".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},{".",'e'},{"..-.",'f'},
    {"--.",'g'},{"....",'h'},{"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},
    {"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},{"--.-",'q'},{".-.",'r'},
    {"...",'s'},{"-",'t'},{"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},
    {"-.--",'y'},{"--..",'z'}};
    string morse = "";
    for(int i = 0; i < letter.size(); i++){
        if(letter[i] == ' '){
            answer += m[morse];
            morse.clear();
        }else{
            morse += letter[i];
        }
    }
    answer += m[morse];
    return answer;
}