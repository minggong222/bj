#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    for(int i = 2; i >= 0; i--)
    {
        if((double)(dots[3][0] - dots[i][0])/(double)(dots[3][1] - dots[i][1]) == (double)(dots[(i+2)%3][0] - dots[(i+1)%3][0])/(double)(dots[(i+2)%3][1] - dots[(i+1)%3][1]))
            return 1;
    }
    return 0;
}