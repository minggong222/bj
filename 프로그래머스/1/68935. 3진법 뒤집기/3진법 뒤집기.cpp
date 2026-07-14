#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string str = "";
    while(n){
        str = str + to_string(n%3);
        n /= 3;
    }
    answer = stoi(str, nullptr, 3);
    return answer;
}