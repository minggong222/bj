#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    for(auto x: emergency)
    {
        int s = 0;
        for(auto y : emergency)
        {
            if(x <= y)
                s++;
        }
        answer.push_back(s);
    }
    return answer;
}