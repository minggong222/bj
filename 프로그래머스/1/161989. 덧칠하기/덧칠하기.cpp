#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int i = 0;
    int a = section[i] + m - 1;
    int idx = section.size() - 1;
    while(true){
        if(section[i] > a){
            a = section[i] + m - 1;
            answer++;
        }else{
            i++;
        }
        if(i > idx)
            break;
    }
    return answer;
}