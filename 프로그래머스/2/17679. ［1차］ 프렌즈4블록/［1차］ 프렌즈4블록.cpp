#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    bool sw = true;
    while(sw){
        sw = false;
        vector<vector<bool>> v(m, vector<bool>(n, false));
        for(int i = 0; i < m-1; i++){
            for(int j = 0; j < n-1; j++){
                if(board[i][j] == ' ')  continue;
                char c = board[i][j];
                if(c == board[i][j+1] && c == board[i+1][j] && c == board[i+1][j+1]){
                    v[i][j] = true;
                    v[i][j+1] = true;
                    v[i+1][j] = true;
                    v[i+1][j+1] = true;
                    sw = true;
                }
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(v[i][j]){
                    answer++;
                    board[i][j] = ' ';
                }
            }
        }
        
        for(int i = m-1; i >= 1; i--){
            for(int j = n-1; j >= 0; j--){
                if(board[i][j] == ' '){
                    for(int k = i-1; k >= 0; k--){
                        if(board[k][j] != ' '){
                            swap(board[i][j], board[k][j]);
                            break;
                        }
                    }
                }
            }
        }
    }
    return answer;
}