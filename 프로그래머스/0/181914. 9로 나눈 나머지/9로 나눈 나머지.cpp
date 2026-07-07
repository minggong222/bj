#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int a = 0;
    for(int i = 0; i < number.size(); i++){
        a = a*10 + (number[i] - '0');
        a %= 9;
    }
    return a;
}