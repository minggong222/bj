#include <string>
#include <vector>
#include <set>
using namespace std;

vector<bool> visit(8, false);
set<int> s;

void f(string numbers, string str){
    for(int i = 0; i < numbers.size(); i++){
        if(!visit[i]){
            s.insert(stoi(str+numbers[i]));
            visit[i] = true;
            f(numbers, str+numbers[i]);
            visit[i] = false;
        }
    }
}

int solution(string numbers) {
    int answer = 0;
    vector<bool> prime(10000000, true);
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i * i <= 10000000; i++){
        if(!prime[i])   continue;
        for(int j = i+i; j <= 10000000; j+=i){
            prime[j] = false;
        }
    }
    f(numbers, "");
    for(auto iter = s.begin(); iter != s.end(); iter++){
        if(prime[*iter])    answer++;
    }
    return answer;
}