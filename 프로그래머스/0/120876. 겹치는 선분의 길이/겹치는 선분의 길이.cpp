#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    map<int, int> m;
    for(auto x : lines){
        for(int i = x[0]; i < x[1]; i++){
            m[i]++;
            if(m[i] == 2){
                answer++;
            }
        }
    }
    return answer;
}