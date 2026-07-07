#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string before, string after) {
    map<char, int> m;
    for(auto c : before){
        m[c]++;
    }
    for(auto c : after){
        if(m[c] == 0){
            return 0;
        }
        m[c]--;
    }
    return 1;
}