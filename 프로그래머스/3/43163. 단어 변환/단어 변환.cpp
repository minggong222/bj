#include <string>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    set<string> s;
    queue<pair<string, int>> q;
    for(auto str : words){
        s.insert(str);
    }
    q.push({begin, 0});
    while(!q.empty()){
        string str = q.front().first;
        int idx = q.front().second;
        q.pop();
        if(str == target){
            answer = idx;
            break;
        }
        for(int i = 0; i < str.size(); i++){
            for(int j = 0; j < 26; j++){
                string a = "";
                a = str.substr(0,i);
                a += ('a'+j);
                a += str.substr(i+1);
                if(s.find(a) != s.end()){
                    q.push({a,idx+1});
                    s.erase(a);
                }
            }
        }
    }
    return answer;
}