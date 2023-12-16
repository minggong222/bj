#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer(3);
    int i = 1;
    for(auto x: answers)
    {
        if(i%5 == 0)
            if(x == 5)
                answer[0]++;
        if(i%5 == x)
            answer[0]++;
        if(i%2 == 1)
        {
            if(x == 2)
                answer[1]++;
        }else{
            switch((i/2)%4){
                case 1:
                    if(x == 1)
                        answer[1]++;
                    break;
                case 2:
                    if(x == 3)
                        answer[1]++;
                    break;
                case 3:
                    if(x == 4)
                        answer[1]++;
                    break;
                case 0:
                    if(x == 5)
                        answer[1]++;
                    break;
            }
        }
        switch(((i+1)/2)%5){
            case 1:
                if(x == 3)
                    answer[2]++;
                break;
            case 2:
                if(x == 1)
                    answer[2]++;
                break;
            case 3:
                if(x == 2)
                    answer[2]++;
                break;
            case 4:
                if(x == 4)
                    answer[2]++;
                break;
            case 0:
                if(x == 5)
                    answer[2]++;
                break;
        }
        i++;
    }
    if(answer[0] == answer[1] && answer[1] == answer[2])
        return {1,2,3};
    else if(answer[0]==answer[1] && answer[0] > answer[2])
        return {1,2};
    else if(answer[1]==answer[2] && answer[1] > answer[0])
        return {2,3};
    else if(answer[2]==answer[0] && answer[2] > answer[1])
        return {1,3};
    else if(answer[0] > answer[1] && answer[0] > answer[2])
        return {1};
    else if(answer[1] > answer[0] && answer[1] > answer[2])
        return {2};
    else if(answer[2] > answer[0] && answer[2] > answer[1])
        return {3};
}