#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    while(true)
    {
        answer += chicken / 10;
        chicken = (chicken / 10) + (chicken % 10);
        if(chicken < 10)
            return answer;
    }
    return answer;
}