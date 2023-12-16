#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer = arr;
    int i = 0;
    if(arr.size()%2 == 0)
        i = 1;
    for(i; i < arr.size(); i+=2){
        answer[i] += n;
    }
    return answer;
}