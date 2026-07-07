#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool prime[10001];
    for(int i = 2; i <= 100; i++){
        if(!prime[i]){
            for(int j = i+i; j <= 10000; j+=i){
                prime[j] =true;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(prime[i]) answer++;
    }
    return answer;
}