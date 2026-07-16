#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int sum = (num*(num+1))/2;
    int s = 1;
    int e = num;
    while(1){
        if(sum > total){
            sum -= e;
            e--;
            s--;
            sum += s;
        }else if(sum < total){
            sum -= s;
            s++;
            e++;
            sum += e;
        }else{
            for(int i = s; i <= e; i++)
                answer.push_back(i);
            break;
        }
    }
    return answer;
}