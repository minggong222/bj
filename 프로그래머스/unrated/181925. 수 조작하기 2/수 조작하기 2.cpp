#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int a;
    for(int i = numLog.size()-2; i >= 0; i--){
        a = numLog[i+1] - numLog[i];
        switch(a){
            case 1:
                answer = 'w' + answer;
                break;
            case -1:
                answer = 's' + answer;
                break;
            case 10:
                answer = 'd' + answer;
                break;
            case -10:
                answer = 'a' + answer;
                break;
        }
    }
    return answer;
}