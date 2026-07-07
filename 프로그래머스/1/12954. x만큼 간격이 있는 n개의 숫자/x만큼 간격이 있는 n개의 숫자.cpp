#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer(1,x);
    for(int i = 1; i < n; i++){
        answer.push_back(answer[i-1] + x);
    }
    return answer;
}