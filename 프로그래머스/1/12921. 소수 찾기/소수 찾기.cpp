#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> prime(n + 1, true);
    prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(!prime[i])   continue;
        answer++;
        for(int j = i+i; j <= n; j+=i){
            prime[j] = false;
        }
    }
    return answer;
}