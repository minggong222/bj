#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    if(wallet[0] < wallet[1])   swap(wallet[0], wallet[1]);
    while(1){
        if(bill[0] < bill[1])   swap(bill[0], bill[1]);
        if(wallet[0] >= bill[0] && wallet[1] >= bill[1]){
            break;
        }
        answer++;
        bill[0] /= 2;
    }
    return answer;
}