#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int idx = 1;
    while(idx < k){
        answer += 2;
        answer %= numbers.size();
        idx++;
    }
    return answer+1;
}