#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool a = true;
    while(1){
        a = false;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 50){
                if(arr[i]%2 == 0){
                    arr[i] = arr[i]/2;
                    a = true;
                }
            }else{
                if(arr[i]%2 == 1){
                    arr[i] = arr[i]*2 + 1;
                    a = true;
                }
            }
        }
        if(!a)
            break;
        else
            answer++;
    }
    return answer;
}