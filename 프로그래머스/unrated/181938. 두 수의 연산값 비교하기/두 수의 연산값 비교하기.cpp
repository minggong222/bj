#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string s1 = to_string(a) + to_string(b);
    if(stoi(s1) > 2*a*b)
        answer = stoi(s1);
    else
        answer = 2*a*b;
    return answer;
}