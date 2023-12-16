#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;
int i = 0;
int Atoi(string s , int idx)
{
    int a = 0;
    while(s[i] != ' ' && idx > i)
    {
        a = a*10 + (s[i] - 48);
        i++;
    }
    i++;
    return a;
}
string solution(string s) {
    string answer = "";
    string answer2 = "";
    vector<int> a;
    int idx = s.size();
    while(i < idx)
    {
        if(s[i] == '-')
        {
            i++;
            a.push_back(-Atoi(s, idx));
        }else{
            a.push_back(Atoi(s, idx));
        }
    }
    sort(a.begin(),a.end());
    answer = to_string(a[0]);
    answer2 = to_string(a[a.size()-1]);
    return answer + ' ' + answer2;
}