#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string;
    for(int i = 0;i <= (e-s)/2; i++){
        swap(answer[s+i],answer[e-i]);
    }
    return answer;
}