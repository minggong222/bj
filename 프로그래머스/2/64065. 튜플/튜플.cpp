#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.second > b.second);
}
vector<int> solution(string s) {
    vector<int> answer;
    map<int , int> m;
    int a = 0;
    for(int i = 0; i< s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            a = a*10 + s[i] - 48;
            if(!(s[i+1] >= '0' && s[i+1] <= '9'))
                m[a]++;
        }else{
            a = 0;
        }
    }
    vector<pair<int, int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < v.size(); i++)
        answer.push_back(v[i].first);
    return answer;
}