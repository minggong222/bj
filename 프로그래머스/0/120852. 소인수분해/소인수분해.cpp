#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i = 2;
    while(n != 1){
        if(n%i == 0){
            answer.push_back(i);
            while(n%i == 0){
                n/=i;
            }
        }
        i++;
    }
    return answer;
}