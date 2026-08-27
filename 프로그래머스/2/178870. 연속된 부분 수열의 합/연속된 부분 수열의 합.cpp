#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int l = 0, r = 0;
    long long sum = sequence[0];
    int min = sequence.size() + 1;
    while(1){
        if(sum == k){
            if(r - l + 1 < min){
                min = r - l + 1;
                answer = {l, r};
            }
            if(l == r & r == sequence.size() - 1)   break;
            sum -= sequence[l++];
        }
        if(l == r & r == sequence.size() - 1)   break;
        if((sum < k || l >= r) && r + 1 < sequence.size()){
            sum += sequence[++r];
        }else if(l < r){
            sum -= sequence[l++];
        }
        
    }
    return answer;
}