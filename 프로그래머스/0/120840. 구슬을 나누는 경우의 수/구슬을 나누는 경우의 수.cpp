#include <string>
#include <vector>

using namespace std;

int f(int n, int m){
    if(n == m || m == 0)    return 1;
    if(m == 1 || n == m + 1) return n;
    return f(n-1,m) + f(n-1,m-1);
}

int solution(int balls, int share) {
    int answer = f(balls, share);
    return answer;
}