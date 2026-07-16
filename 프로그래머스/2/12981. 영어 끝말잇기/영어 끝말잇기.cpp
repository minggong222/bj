#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0, 0};
    int cnt = 1;
    int idx = 2;
    set<string> s;
    s.insert(words[0]);
    for(int i = 1; i < words.size(); i++){
        if(s.find(words[i]) != s.end() || words[i-1].back() != words[i][0]){
            answer = {idx, cnt};
            break;
        }
        s.insert(words[i]);
        idx++;
        if(idx > n){
            idx = 1;
            cnt++;
        }
    }

    return answer;
}