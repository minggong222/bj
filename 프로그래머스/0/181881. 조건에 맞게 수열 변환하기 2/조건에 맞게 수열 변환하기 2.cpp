#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> v = arr;
    while(1){
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < 50 && arr[i]%2==1){
                arr[i] = arr[i]*2+1;
            }else if(arr[i] >= 50 && arr[i]%2==0){
                arr[i] = arr[i]/2;
            }
        }
        if(v == arr)    return answer;
        v = arr;
        answer++;
    }
    return answer;
}