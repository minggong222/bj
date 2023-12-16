#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(auto x : strArr){
        if(x.find("ad") == string::npos)
            answer.push_back(x);
    }
    return answer;
}