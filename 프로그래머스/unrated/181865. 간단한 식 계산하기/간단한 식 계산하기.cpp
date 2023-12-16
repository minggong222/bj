#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string binomial) {
    int answer = 0;
    char s = ' ';
    int a = 0;
    int b = 0;
    for(auto x : binomial){
        if(isdigit(x)){
            if(s == ' ')
                a = a*10 + (x - 48);
            else
                b = b*10 + (x - 48);
        }else if(x != ' ')
            s = x;
    }
    switch(s){
        case '+':
            answer = a + b;
            break;
        case '-':
            answer = a - b;
            break;
        case '*':
            answer = a * b;
            break;
    }
    return answer;
}