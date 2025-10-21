#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int start = 0, end = 0;
    int sum = sequence[end];
    int m = 10000000;
    while(end < sequence.size()){
        if(sum == k){
            if(end - start + 1 < m){
                m = end - start + 1;
                answer.clear();
                answer.push_back(start);
                answer.push_back(end);
            }
            if(start < end){
                sum -= sequence[start];
                start++;
            }else{
                end++;
                sum += sequence[end];
            }
        }else if(sum < k){
            end++;
            sum += sequence[end];
        }else{
            if(start == end){
                end++;
                sum += sequence[end];
            }else{
                sum -= sequence[start];
                start++;
            }
        }
    }
    return answer;
}