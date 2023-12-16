#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int idx = my_string.size() - n;
    for(int i = idx; i < n+idx; i++){
        answer += my_string[i];
    }
    return answer;
}