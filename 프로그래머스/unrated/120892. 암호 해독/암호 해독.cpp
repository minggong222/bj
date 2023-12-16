#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for(int i = 1; i < cipher.size()/code+1; i++)
    {
        answer.push_back(cipher[(i)*code-1]);
    }
    return answer;
}