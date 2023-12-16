#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    while(true){
        if(n_str[0] != '0')
            return n_str;
        else{
            n_str.erase(n_str.begin());
        }
    }
    return answer;
}