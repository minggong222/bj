#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    for(int i = 1; i <= yellow; i++)
    {
        if(yellow%i == 0)
        {
            if((2*i + 2*((yellow/i) + 2)) == brown)
                return {(yellow/i) + 2 , i + 2};
        }
    }
    return answer;
}