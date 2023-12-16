#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    for(auto x : s)
    {
        int a = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == x)
                a++;
        }
        if(a == 1)
            answer.push_back(x);
    }
    sort(answer.begin(),answer.end());
    return answer;
}