#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    map<int, int> m;
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
    if(m.size() == 1){
        return 1111*a;
    }
    if(m.size() == 2){
        if(m[a] == 1){
            return pow(10*b+a,2);
        }else if(m[b] == 1){
            return pow(10*a+b,2);
        }else if(m[c] == 1){
            return pow(10*a+c,2);
        }else if(m[d] == 1){
            return pow(10*a+d,2);
        }
        int x,y;
        x = m.begin()->first;
        y = (++m.begin())->first;
        return (x+y) * abs(x-y);
    }
    if(m.size() == 3){
        vector<int> v;
        for(auto iter = m.begin(); iter != m.end(); iter++){
            if(iter->second == 1)
                v.push_back(iter->first);
        }
        return v[0] * v[1];
    }
    answer = m.begin()->first;
    return answer;
}