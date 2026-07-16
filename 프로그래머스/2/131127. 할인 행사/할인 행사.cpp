#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> m1, m2;
    for(int i = 0; i < want.size(); i++){
        m1[want[i]] = number[i];
    }
    for(int i = 0; i < 10; i++){
        m2[discount[i]]++;
    }
    if(m1 == m2)    answer++;
    for(int i = 10; i < discount.size(); i++){
        m2[discount[i-10]]--;
        if(m2[discount[i-10]] == 0){
            m2.erase(discount[i-10]);
        }
        m2[discount[i]]++;
        if(m1 == m2){
            answer++;
        }
    }
    return answer;
}