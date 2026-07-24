#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    vector<vector<bool>> visit(board.size(), vector<bool>(board[0].size(), true));
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            if(board[i][j] == 1){
                visit[i][j] = false;
                for(int k = 0; k < 8; k++){
                    int nx = i+dir[k][0];
                    int ny = j+dir[k][1];
                    if(nx >= 0 && nx < board.size() &&
                      ny >= 0 && ny < board[i].size()){
                        visit[nx][ny] = false;
                    }
                }
            }
        }
    }
    for(int i = 0; i < visit.size(); i++){
        for(int j = 0; j < visit[0].size(); j++){
            if(visit[i][j]) answer++;
        }
    }
    return answer;
}