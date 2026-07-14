#include <string>
#include <vector>
#include <map>
using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    map<string, int> m = {{"zero",0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
                          {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    string str = "";
    for(auto c : numbers){
        str += c;
        if(m.find(str) != m.end()){
            answer *= 10;
            answer += m[str];
            str = "";
        }
    }
    return answer;
}