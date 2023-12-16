#include <string>
#include <vector>

using namespace std;

int solution(string n_str) {
    int answer = 0;
    for(int i=0; i < n_str.size(); i++){
        answer = (answer * 10) + (n_str[i]-48);
    }
    return answer;
}