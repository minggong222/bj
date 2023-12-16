#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(auto x : my_string)
    {
        if(isdigit(x))
            answer.push_back(x-48);
    }
    sort(answer.begin(), answer.end());
    return answer;
}