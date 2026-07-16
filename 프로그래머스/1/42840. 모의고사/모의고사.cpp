#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,1,2,3,2,4,2,5};
    vector<int> c = {3,3,1,1,2,2,4,4,5,5};
    vector<int> sum = {0,0,0};
    for(int i = 0; i < answers.size(); i++){
        if(a[i%5] == answers[i])
            sum[0]++;
        if(b[i%8] == answers[i])
            sum[1]++;
        if(c[i%10] == answers[i])
            sum[2]++;
    }
    
    if(sum[0] > sum[1] && sum[0] > sum[2]){
        answer.push_back(1);    
    }else if(sum[1] > sum[2] && sum[1] > sum[0]){
        answer.push_back(2);
    }else if(sum[2] > sum[0] && sum[2] > sum[1]){
        answer.push_back(3);
    }else if(sum[0] == sum[1] && sum[0] > sum[2]){
        answer = {1,2};
    }else if(sum[0] == sum[2] && sum[0] > sum[1]){
        answer = {1,3};
    }else if(sum[1] == sum[2] && sum[1] > sum[0]){
        answer = {2,3};
    }else if(sum[0] == sum[1] && sum[1] == sum[2]){
        answer = {1,2,3};
    }
    return answer;
}