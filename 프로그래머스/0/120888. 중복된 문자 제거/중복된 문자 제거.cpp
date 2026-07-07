#include <string>
#include <vector>
#include <set>
using namespace std;

string solution(string my_string) {
    string answer = "";
    set<char> s;
    for(auto c : my_string){
        if(s.find(c) == s.end()){
            answer += c;
            s.insert(c);
        }
    }
    return answer;
}