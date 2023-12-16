#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int idx1 = cards1.size(), idx2 = cards2.size(), idx3 = goal.size();
    int i = 0, j = 0;
    while(true){
        if(goal[i+j] == cards1[i] && i != idx1){
            i++;
            if(i+j == idx3)
                break;
        }else if(goal[i+j] == cards2[j] && j != idx2){
            j++;
            if(i+j == idx3)
                break;
        }else{
            return "No";
        }
        if(i+j == idx1 + idx2)
            break;
    }
    return "Yes";
}