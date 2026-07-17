#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int idx = 0;
    for(int i = 0; i < section.size(); i++){
        if(section[i] > idx){
            idx = section[i] + m - 1;
            answer++;
        }
    }
    return answer;
}