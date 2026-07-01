#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = min(box[1],box[2])/n;
    answer *= answer;
    answer *= box[0]/n;
    return answer;
}