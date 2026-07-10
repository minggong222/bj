#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string a = "", b = "";
    for(auto c : s){
        if(c == ' '){
            if(a == "Z"){
                answer -= stoi(b);
            }else{
                answer += stoi(a);
            }
            b = a;
            a.clear();
        }else{
            a+=c;
        }
    }
    if(a == "Z"){
        answer -= stoi(b);
    }else{
        answer += stoi(a);
    }
    return answer;
}