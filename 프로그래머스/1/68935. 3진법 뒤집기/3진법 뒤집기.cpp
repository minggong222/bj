#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    vector<int> answer1; 
    int answer = 0;
    while( 1 )
    {
        answer1.push_back(n%3);
        if(n/3 == 0)
        {
            break;
        }
        n = n/3;
    }
    for(int i = 0; i < answer1.size(); i++)
    {
        answer += answer1[answer1.size()-1-i] * pow(3,i);
    }
    return answer;
}