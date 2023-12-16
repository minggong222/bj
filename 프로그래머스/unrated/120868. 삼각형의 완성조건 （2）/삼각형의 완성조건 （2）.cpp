#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    if(sides[0] > sides[1])
    {
        for(int i = sides[0]-sides[1] + 1; i <= sides[0]; i++ )
        {
            answer++;
        }
        for(int i = sides[0] + sides[1]-1; i > sides[0]; i--)
            answer++;
    }else{
        for(int i = sides[1]-sides[0] + 1; i <= sides[1]; i++ )
        {
            answer++;
        }
        for(int i = sides[1] + sides[0]-1; i > sides[1]; i--)
            answer++;
    }
    return answer;
}