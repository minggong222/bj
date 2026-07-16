#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int idxA = 0, idxB = 0;
    for(auto s : goal){
        if(idxA < cards1.size() && cards1[idxA] == s){
            idxA++;
        }else if(idxB < cards2.size() && cards2[idxB] == s){
            idxB++;
        }else{
            answer = "No";
            break;
        }
    }
    return answer;
}