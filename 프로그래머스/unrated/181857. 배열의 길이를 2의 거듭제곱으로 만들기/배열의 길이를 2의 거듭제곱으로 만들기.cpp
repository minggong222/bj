#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int a = 0;
    while(arr.size() > pow(2,a)){
        a++;
    }
    cout << pow(2,a);
    for(int i = arr.size(); i < pow(2,a); i++){
        answer.push_back(0);
    }
    return answer;
}