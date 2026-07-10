#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());
    int answer = array[0];
    for(auto i : array){
        if(abs(i-n) < abs(answer-n))
            answer = i;
    }
    return answer;
}