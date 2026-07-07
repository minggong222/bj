#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    map<int, int> m;
    while(i <= j){
        int idx = i;
        while(idx){
            m[idx%10]++;
            idx/=10;
        }
        i++;
    }
    return m[k];
}