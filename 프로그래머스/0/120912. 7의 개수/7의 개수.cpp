#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string str = "";
    for(auto i : array){
        str+=to_string(i);
    }
    for(auto c : str){
        if(c == '7') answer++;
    }
    return answer;
}