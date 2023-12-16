#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = ((k - n/10) * 2000) + (n*12000);
    return answer;
}