#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int i = x, sum = 0;
    while(i){
        sum += i%10;
        i /= 10;
    }
    answer = !(x%sum);
    return answer;
}