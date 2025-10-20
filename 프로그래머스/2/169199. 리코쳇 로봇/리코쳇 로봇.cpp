#include <string>
#include <vector>

using namespace std;
vector<vector<int>> visit(100, vector<int>(100, 123456789));
int answer = 1234567890;
void dfs(int x, int y, int cnt, vector<string> board){
    if(cnt >= answer)   return;
    if(board[x][y] == 'G')
        answer = min(answer, cnt);
    int nx = x, ny = y;
    while(1){
        nx--;
        if(nx >= 0){
            if(board[nx][ny] == 'D'){
                if(visit[nx+1][ny] > cnt + 1){
                    visit[nx+1][ny] = cnt + 1;
                    dfs(nx+1, ny, cnt+1, board);
                }
                break;
            }
        }else{
            if(visit[nx+1][ny] > cnt + 1){
                    visit[nx+1][ny] = cnt+1;
                    dfs(nx+1, ny, cnt+1, board);
            }
            break;
        }
    }
    nx = x, ny = y;
    while(1){
        nx++;
        if(nx < board.size()){
            if(board[nx][ny] == 'D'){
                if(visit[nx-1][ny] > cnt + 1){
                    visit[nx-1][ny] = cnt+1;
                    dfs(nx-1, ny, cnt+1, board);
                }
                break;
            }
        }else{
            if(visit[nx-1][ny] > cnt + 1){
                    visit[nx-1][ny] = cnt + 1;
                    dfs(nx-1, ny, cnt+1, board);
            }
            break;
        }
    }
    nx = x, ny = y;
    while(1){
        ny--;
        if(ny >= 0){
            if(board[nx][ny] == 'D'){
                if(visit[nx][ny+1] > cnt + 1){
                    visit[nx][ny+1] = cnt+1;
                    dfs(nx, ny+1, cnt+1, board);
                }
                break;
            }
        }else{
            if(visit[nx][ny+1] > cnt + 1){
                    visit[nx][ny+1] = cnt+1;
                    dfs(nx, ny+1, cnt+1, board);
            }
            break;
        }
    }
    nx = x, ny = y;
    while(1){
        ny++;
        if(ny < board[nx].size()){
            if(board[nx][ny] == 'D'){
                if(visit[nx][ny-1] > cnt + 1){
                    visit[nx][ny-1] = cnt+1;
                    dfs(nx, ny-1, cnt+1, board);
                }
                break;
            }
        }else{
            if(visit[nx][ny-1] > cnt + 1){
                    visit[nx][ny-1] = cnt+1;
                    dfs(nx, ny-1, cnt+1, board);
            }
            break;
        }
    }
    return;
}
int solution(vector<string> board) {
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            if(board[i][j] == 'R'){
                visit[i][j] = true;
                dfs(i,j,0,board);
                break;
            }
        }
    }
    if(answer == 1234567890)
        answer = -1;
    return answer;
}