#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string s) {
    int answer = 0;
    map<string, int> m = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
                          {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    string str = "";
    for(auto c : s){
        str += c;
        if(isdigit(c)){
            answer = answer*10 + stoi(str);
            str.clear();
        }else if(m.find(str) != m.end()){
            answer = answer*10 + m[str];
            str.clear();
        }
    }
    return answer;
}