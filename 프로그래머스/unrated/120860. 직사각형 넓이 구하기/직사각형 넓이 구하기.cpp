#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    if(abs(dots[0][0] - dots[1][0]) > 0)
    {
        if(abs(dots[0][1] - dots[1][1]) > 0)
            answer = abs(dots[0][1] - dots[1][1]) * abs(dots[0][0] - dots[1][0]);
        else
            answer = abs(dots[0][1] - dots[2][1]) * abs(dots[0][0] - dots[1][0]);
    }else
        answer = abs(dots[0][1] - dots[1][1]) * abs(dots[0][0] - dots[2][0]);
    return answer;
}