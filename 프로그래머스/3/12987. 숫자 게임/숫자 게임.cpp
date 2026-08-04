#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    priority_queue<int> a, b;
    for(int i = 0; i < A.size(); i++){
        a.push(A[i]);
        b.push(B[i]);
    }
    while(!a.empty()){
        int aa = a.top();
        int bb = b.top();
        if(aa < bb){
            b.pop();
            answer++;
        }
        a.pop();
    }
    return answer;
}