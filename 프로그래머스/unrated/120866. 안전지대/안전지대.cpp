#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    for(int i = 0; i < board.size();i++)
    {
        for(int j = 0; j < board.size();j++)
        {
            int a = 0;
            for(int x = -1; x < 2; x++)
                for(int y = -1; y <2; y++)
                {
                    if(i + x >= 0 && j + y >=0 && i + x < board.size() && j + y < board.size())
                    {
                        if(board[i+x][j+y] == 1) a++;
                    }
                }
            if(a == 0)
                answer++;
        }
    }
    return answer;
}