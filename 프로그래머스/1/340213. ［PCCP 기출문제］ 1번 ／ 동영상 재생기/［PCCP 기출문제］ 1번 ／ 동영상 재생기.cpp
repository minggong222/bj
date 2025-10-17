#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int m;
    int s = stoi(pos.substr(3,2)) + stoi(pos.substr(0,2)) * 60;
    int op_s = stoi(op_start.substr(0,2)) * 60 + stoi(op_start.substr(3,2));
    int op_e = stoi(op_end.substr(0,2)) * 60 + stoi(op_end.substr(3,2));
    int video_s = stoi(video_len.substr(0,2)) * 60 + stoi(video_len.substr(3,2));
    for(int i = 0; i < commands.size(); i++){
        switch(commands[i][0]){
            case 'p':
                s -= 10;
                if(s < op_e && s >= op_s){
                    s = op_e;
                }
                s = max(0,s);
                break;
            case 'n':
                if(s < op_e && s >= op_s){
                    s = op_e;
                }
                s += 10;
                if(s < op_e && s >= op_s){
                    s = op_e;
                }
                s = min(s, video_s);
                break;
        }
    }
    m = s/60;
    s = s%60;
    if(m < 10){
        answer += '0';
    }
    answer += to_string(m) + ':';
    if(s < 10){
        answer += '0';
    }
    answer += to_string(s);
    return answer;
}