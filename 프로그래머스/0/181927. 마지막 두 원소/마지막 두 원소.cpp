#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int x = num_list.back();
    num_list.pop_back();
    int y = num_list.back();
    x > y ? answer.push_back(x-y) : answer.push_back(x*2);
    return answer;
}