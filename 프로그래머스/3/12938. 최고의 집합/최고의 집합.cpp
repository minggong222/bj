#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    if(n > s){
        answer.push_back(-1);
        return answer;
    }
    if(s%n != 0){
        int r = s/n;
        for(int i = 0; i < n - s%n; i++){
            answer.push_back(r);
        }
        r++;
        for(int i = 0; i < s%n; i++){
            answer.push_back(r);
        }
    }else{
        int r = s/n;
        for(int i = 0; i < n; i++){
            answer.push_back(r);
        }
    }
    return answer;
}