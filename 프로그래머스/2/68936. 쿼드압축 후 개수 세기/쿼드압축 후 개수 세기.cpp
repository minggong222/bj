#include <string>
#include <vector>
#include <map>
using namespace std;
vector<int> answer = {0,0};
vector<vector<int>> a;
void func(int x, int y, int n){
    bool zero = true;
    bool one = true;
    for(int i = x; i < x + n; i++){
        for(int j = y; j < y + n; j++){
            if(a[i][j]) zero = false;
            else    one = false;
        }
    }
    if(zero){
        answer[0]++;
        return;
    }
    if(one){
        answer[1]++;
        return;
    }
    func(x,y,n/2);
    func(x+n/2,y,n/2);
    func(x,y+n/2,n/2);
    func(x+n/2,y+n/2,n/2);
}

vector<int> solution(vector<vector<int>> arr) {
    a = arr;
    func(0,0,arr.size());
    return answer;
}