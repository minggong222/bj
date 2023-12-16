#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for(auto x:numlist)
    {
        if(x%n == 0)
            answer.push_back(x);
    }
    return answer;
}