#include <string>
#include <vector>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    int x = 0, y = 0, z = -1;
    vector<vector<vector<bool>>> visit(11, vector<vector<bool>>(11, vector<bool>(4, false)));
    for(auto c : dirs){
        if(c == 'U' && y < 5){
            y++;
            if(!visit[y+5][x+5][0] && !visit[y+4][x+5][1]){
                visit[y+5][x+5][0] = true;
                visit[y+4][x+5][1] = true;
                answer++;
            }
        }else if(c == 'D' && y > -5){
            y--;
            if(!visit[y+5][x+5][1] && !visit[y+6][x+5][0]){
                visit[y+5][x+5][1] = true;
                visit[y+6][x+5][0] = true;
                answer++;
            }
        }else if(c == 'R' && x < 5){
            x++;
            if(!visit[y+5][x+5][2] && !visit[y+5][x+4][3]){
                visit[y+5][x+5][2] = true;
                visit[y+5][x+4][3] = true;
                answer++;
            }
        }else if(c == 'L' && x > -5){
            x--;
            if(!visit[y+5][x+5][3] && !visit[y+5][x+6][2]){
                visit[y+5][x+5][3] = true;
                visit[y+5][x+6][2] = true;
                answer++;
            }
        }
    }
    return answer;
}