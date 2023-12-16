#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    map<int, int> m;
    for(auto x: strArr){
        m[x.size()]++;
    }

    for(int i = 0; i <= 30; i++){
        if(m[i] > answer) answer = m[i];
    }
    return answer;
}