#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> m;
    for(auto x : tangerine){
        m[x]++;
    }
    vector<int> v;
    for(auto iter = m.begin(); iter != m.end(); iter++){
        v.push_back(iter->second);
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < v.size(); i++){
        k -= v[i];
        answer++;
        if(k <= 0)  break;
    }
    return answer;
}