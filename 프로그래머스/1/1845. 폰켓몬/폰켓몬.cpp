#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s;
    for(auto x : nums){
        s.insert(x);
    }
    s.size() > nums.size()/2 ? answer = nums.size()/2 : answer = s.size();
    return answer;
}