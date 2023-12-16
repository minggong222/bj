#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n));
    int cnt = 1;
    int i = 0, j = 0;
    int sw = 1;
    while(cnt <= n*n){
        switch(sw){
            case 1:
                if(j == n || answer[i][j]){
                    j--;
                    i++;
                    sw++;
                }else{
                    answer[i][j++] = cnt++;
                }
                break;
            case 2:
                if(i == n || answer[i][j]){
                    i--;
                    j--;
                    sw++;
                }else{
                    answer[i++][j] = cnt++;
                }
                break;
            case 3:
                if(j < 0 || answer[i][j]){
                    j++;
                    i--;
                    sw++;
                }else{
                    answer[i][j--] = cnt++;
                }
                break;
            case 4:
                if(i < 0|| answer[i][j]){
                    j++;
                    i++;
                    sw = 1;
                }else{
                    answer[i--][j] = cnt++;
                }
                break;
        }
    }
    return answer;
}