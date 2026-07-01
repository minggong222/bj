#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size() == arr2.size()){
        int a = 0;
        for(int i = 0; i < arr1.size(); i++){
            a += arr1[i];
            a -= arr2[i];
        }
        if(a == 0) answer = 0;
        else if(a > 0) answer = 1;
        else answer = -1;
    }else{
        if(arr1.size() > arr2.size())
            answer = 1;
        else
            answer = -1;
    }
    return answer;
}