#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer = numbers;
    if(direction == "right"){
        answer.insert(answer.begin(), numbers.back());
        answer.pop_back();
    }else{
        answer.push_back(numbers[0]);
        answer.erase(answer.begin());
    }
    return answer;
}