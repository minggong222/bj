#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string answer1 = "";
    while(n != 0){
        answer1 += n%10 + 48;
        n = n/10;
    }
    for(int i = answer1.size()-1; i >= 0;i--){
        answer.push_back(answer1[i]);
    }
    return answer;
}