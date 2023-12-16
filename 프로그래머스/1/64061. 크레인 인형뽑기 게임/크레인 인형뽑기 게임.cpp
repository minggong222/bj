#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> a;
    for(int i = 0; i < moves.size(); i++)
    {
        for(int j = 0; j < board.size(); j++)
        {
            if(board[j][moves[i]-1] != 0)
            {
                a.push_back(board[j][moves[i]-1]);
               board[j][moves[i]-1] = 0;
                j = board.size();
                if(a.size() > 1 && a[a.size()-1] == a[a.size()-2])
                {
                    a.pop_back();
                    a.pop_back();
                    answer += 2;
                }
            }
        }
    }
    return answer;
}