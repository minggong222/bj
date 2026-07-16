#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;
    for(auto x : clothes){
        m[x[1]]++;
    }
    for(auto iter = m.begin(); iter != m.end(); iter++){
        answer *= (iter->second + 1);
    }
    answer--;
    return answer;
}