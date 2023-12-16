#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int answer;
void dfs(const vector<int>& numbers, const int& target, int index, int sum, bool sign)
{
    if(sign)
        sum += numbers[index++];
    else
        sum -= numbers[index++];
    if(numbers.size() != index)
    {
        dfs(numbers, target, index, sum, true);
        dfs(numbers, target, index, sum, false);
    }
    else
    {
        if(sum == target)
            ++answer;
    }
}

int solution(vector<int> numbers, int target) {
    answer = 0;
    int sum = 0;
    dfs(numbers, target, 0, sum, true);
    dfs(numbers, target, 0, sum, false);
    return answer;
}