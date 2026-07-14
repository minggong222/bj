#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};
    for(auto x : keyinput){
        if(x == "up"){
            answer[1]++;
            if(abs(answer[1]) > board[1]/2) answer[1]--;
        }else if(x == "down"){
            answer[1]--;
            if(abs(answer[1]) > board[1]/2) answer[1]++;
        }else if(x == "left"){
            answer[0]--;
            if(abs(answer[0]) > board[0]/2) answer[0]++;
        }else if(x == "right"){
            answer[0]++;
            if(abs(answer[0]) > board[0]/2) answer[0]--;
        }
    }
    return answer;
}