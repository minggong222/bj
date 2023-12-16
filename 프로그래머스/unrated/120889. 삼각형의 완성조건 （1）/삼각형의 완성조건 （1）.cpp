#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    for(int i = 0; i < 3; i++)
    {
        if (sides[i] >= sides[(i+1)%3] + sides[(i+2)%3])
            return 2;
    }
    return 1;
}