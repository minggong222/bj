#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> answer;
void asd(int a, int l, int r){
    if(l <= a){
        if(a <= r){
            answer.push_back(a);
            asd(a*10, l, r);
            asd(a*10 + 5, l, r);
        }else{
            return;
        }
    }else{
        asd(a*10, l, r);
        asd(a*10 + 5, l, r);
    }
    return;
}
vector<int> solution(int l, int r) {
    asd(5,l,r);
    if(answer.empty()){
        answer.push_back(-1);
    }else{
        sort(answer.begin(), answer.end());
    }
    return answer;
}