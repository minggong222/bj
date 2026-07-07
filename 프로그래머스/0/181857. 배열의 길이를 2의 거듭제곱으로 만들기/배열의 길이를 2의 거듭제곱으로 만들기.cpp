#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int idx = 1;
    while(idx < arr.size()) idx*=2;
    for(int i = arr.size(); i < idx; i++) answer.push_back(0);
    return answer;
}