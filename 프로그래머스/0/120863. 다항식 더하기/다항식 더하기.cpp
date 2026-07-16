#include <string>
#include <vector>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    string str = "";
    int a = 0, b = 0;
    for(int i = 0; i < polynomial.size(); i++){
        if(polynomial[i] == ' '){
            if(str.back() == 'x'){
                str.pop_back();
                if(str.empty())   str += "1";
                a += stoi(str);
            }else{
                b += stoi(str);
            }
            str = "";
            i += 2;
        }else
            str += polynomial[i];
    }
    if(str.back() == 'x'){
        str.pop_back();
        if(str.empty())   str += "1";
        a += stoi(str);
    }else{
        b += stoi(str);
    }
    if(a == 0){
        answer = to_string(b);
    }else{
        if(a > 1)
            answer = to_string(a);
        answer += "x";
       if(b != 0){
            answer = answer + " + " + to_string(b);
        }
    }
    return answer;
}