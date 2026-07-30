#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(int n, int t, int m, int p) {
    string answer = "";
    string str = "0";
    int cnt = t*m;
    for(int i = 1; str.size() <= t*m; i++){
        string s = "";
        int idx = i;
        while(idx){
            if(idx%n >= 10){
                s += ('A'+(idx%n-10));
            }else
                s += to_string(idx%n);
            idx/=n;
        }
        reverse(s.begin(),s.end());
        str += s;
    }
    p--;
    for(int i = 0; i < t; i++){
        answer += str[i*m+p];
    }
    return answer;
}