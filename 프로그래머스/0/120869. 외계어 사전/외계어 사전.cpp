#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    vector<int> v(26,0);
    for(auto x : spell){
        v[(int)(x[0]-'a')]++;
    }
    for(auto x : dic){
        vector<int> d(26, 0);
        for(auto c : x){
            d[c-'a']++;
        }
        if(v == d)
            return 1;
    }
    return answer;
}