#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i = 0; i <= t.size() - p.size();i++)
    {
        string a = "";
        for(int j = 0; j < p.size(); j++)
        {
            a.push_back(t[i+j]);
        }
        long z = stol(a);
        long x = stol(p);
        if(z <= x )
            answer++;
    }
    return answer;
}