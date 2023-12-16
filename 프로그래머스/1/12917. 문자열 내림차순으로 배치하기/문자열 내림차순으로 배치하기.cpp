#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string solution(string s) {
    string answer = "";
    sort(s.begin(),s.end());
    for(int i = s.size()-1; i >= 0; i--)
    {
       answer.push_back(s[i]);
    }
    return answer;
}