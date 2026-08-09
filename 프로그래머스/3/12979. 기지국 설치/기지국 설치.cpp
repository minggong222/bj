#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;
    int idx = 0;
    for(int i = 1; i <= n; i++){
        if(idx < stations.size()){
            int a = i;
            while(a < stations[idx] - w){
                answer++;
                a = a+w+w+1;
            }
            i = stations[idx++] + w;
        }else{
            int a = i;
            while(a <= n){
                answer++;
                a = a+w+w+1;
            }
            break;
        }
    }

    return answer;
}