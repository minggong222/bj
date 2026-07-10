#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    map<char, int> m;
    for(auto c : my_string){
        m[c]++;
    }
    for(int i = 'A'; i <= 'Z'; i++){
        answer.push_back(m[i]);
    }
    for(int i = 'a'; i <= 'z'; i++){
        answer.push_back(m[i]);
    }
    return answer;
}