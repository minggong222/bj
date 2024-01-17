#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int, int> m;
    set<int> s;
    int cnt = 0;
    for(int i = 0; i < topping.size(); i++){
        m[topping[i]]++;
    }
    cnt = m.size();
    for(int i = 0; i < topping.size(); i++){
        s.insert(topping[i]);
        if(!(--m[topping[i]])){
            cnt--;
        }
        if(s.size() == cnt){
            answer++;
        }
    }
    return answer;
}