#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string , int> m;
    map<string , int> m2;
    for(int i = 0; i < want.size(); i++){
        m.insert(make_pair(want[i], number[i]));
        m2.insert(make_pair(want[i], 0));
    }
    for(int i = 0; i < 10; i++){
        if(find(want.begin(), want.end(), discount[i]) != want.end())
            m2[discount[i]]++;
    }
    if(m == m2)
        answer++;
    for(int i = 10; i < discount.size(); i++){
        if(find(want.begin(), want.end(), discount[i]) != want.end()){
            m2[discount[i]]++;
            }
        if(find(want.begin(), want.end(), discount[i-10]) != want.end()){
            m2[discount[i-10]]--;
            }
        if(m == m2){
                answer++;
        }
    }
    return answer;
}