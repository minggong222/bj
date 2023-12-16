#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(auto x: s1)
        for(auto y:s2)
        {
            if(x==y)
            {
                answer++;
            }
        }
    return answer;
}