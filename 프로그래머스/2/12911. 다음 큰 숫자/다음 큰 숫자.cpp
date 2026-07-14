#include <string>
#include <vector>
#include <bitset>
using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = bitset<32>(n).count();
    int i = n+1;
    while(1){
        if(cnt == bitset<32>(i).count()){
            return i;
        }
        i++;
    }
    return answer;
}