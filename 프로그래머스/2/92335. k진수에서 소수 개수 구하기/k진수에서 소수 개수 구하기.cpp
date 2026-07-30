#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n, int k) {
    int answer = 0;
    vector<long long> ans;
    string s = "";
    while(n){
        s += to_string(n%k);
        n/=k;
    }
    reverse(s.begin(), s.end());
    string str = "";
    for(auto c : s){
        if(c == '0'){
            if(str != "")
                ans.push_back(stol(str));
            str.clear();
        }else{
            str += c;
        }
    }
    if(str != "")
        ans.push_back(stol(str));
    for(int i = 0; i < ans.size(); i++){
        bool sw = true;
        if(ans[i] == 1) sw = false;
        for(long long j = 2; j <= sqrt(ans[i]); j++){
            if(ans[i]%j == 0){
                sw = false;
                break;
            }
        }
        if(sw)  answer++;
    }
    return answer;
}