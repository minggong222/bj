#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";
    for(auto c : my_string){
        if(c >= '0' && c <= '9'){
            num+=c;
        }else{
            if(num.size() > 0){
                answer += stoi(num);
                num.clear();
            }
        }
    }
    if(num.size() > 0){
        answer += stoi(num);
        num.clear();
    }
    return answer;
}