#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    if(sides[0] < sides[1]) swap(sides[0], sides[1]);
    int a = sides[0] - sides[1] + 1;
    int b = sides[0] + sides[1] - 1;
    answer = b - a + 1;
    return answer;
}