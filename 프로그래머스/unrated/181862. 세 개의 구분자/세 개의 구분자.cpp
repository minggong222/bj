#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    for(int i = 0; i < myStr.size(); i++){
        if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
            myStr[i] = ' ';
    }
    stringstream ss(myStr);
    string s1;
    while(ss >> s1){
        answer.push_back(s1);
    }
    if(answer.size() == 0)
        answer.push_back("EMPTY");
    return answer;
}