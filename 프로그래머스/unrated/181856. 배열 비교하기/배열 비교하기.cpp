#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size() > arr2.size())
        return 1;
    else if(arr1.size() < arr2.size())
        return -1;
    int sum1 = 0, sum2 = 0;
    for(auto x: arr1){
        sum1 += x;
    }
    for(auto x: arr2){
        sum2 += x;
    }
    if(sum1 == sum2)
        return 0;
    else if( sum1 > sum2)
        return 1;
    else
        return -1;
    return answer;
}