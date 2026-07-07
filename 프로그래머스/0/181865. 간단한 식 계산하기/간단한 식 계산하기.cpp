#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    string a = "", b = "", c = "";
    for(int i = 0; i < binomial.size(); i++){
        if(binomial[i] == ' '){
            a = binomial.substr(0,i);
            b = binomial[i+1];
            c = binomial.substr(i+2);
            break;
        }
    }
    if(b == "+"){
        answer = stoi(a) + stoi(c);
    }else if(b == "-"){
        answer = stoi(a) - stoi(c);
    }else{
        answer = stoi(a) * stoi(c);
    }
    return answer;
}