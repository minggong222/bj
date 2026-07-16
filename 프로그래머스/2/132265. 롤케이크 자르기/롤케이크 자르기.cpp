#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int,int> l,r;
    for(auto x : topping){
        r[x]++;
    }
    for(auto x : topping){
        r[x]--;
        if(r[x] == 0)
            r.erase(x);
        l[x]++;
        if(r.size() == l.size())
            answer++;
    }
    return answer;
}