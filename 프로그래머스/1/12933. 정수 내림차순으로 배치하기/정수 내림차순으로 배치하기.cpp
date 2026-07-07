#include <string>
#include <vector>
#include <map>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    map<int, int> m;
    while(n){
        m[n%10]++;
        n/=10;
    }
    for(int i = 9; i >= 0; i--){
        for(int j = 0; j < m[i]; j++){
            answer = answer*10+i;
        }
    }
    return answer;
}