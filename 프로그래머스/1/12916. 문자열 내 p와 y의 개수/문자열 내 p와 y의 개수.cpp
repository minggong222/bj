#include <string>
#include <iostream>
#include <map>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    map<char, int> m;
    for(auto c : s){
        m[tolower(c)]++;
    }

    return m['p'] - m['y'] == 0;
}