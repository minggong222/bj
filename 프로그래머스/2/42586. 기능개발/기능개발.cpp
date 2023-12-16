#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int i = 1;
    int x = 0;
    int a = 0;
    while(1)
    {
        if(progresses.size() == x)
        {
            answer.push_back(a);
            break;
        }
        if(progresses[x]+speeds[x]*i >= 100)
        {
            a++;
            x++;
        }else if(a == 0){
            i++;
        }else{
            answer.push_back(a);
            a = 0;
        }
    }
    return answer;
}