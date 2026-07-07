#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for(auto i : indices){
        my_string[i] = ' ';
    }
    for(auto c : my_string){
        if(c != ' ')
            answer += c;
    }
    return answer;
}