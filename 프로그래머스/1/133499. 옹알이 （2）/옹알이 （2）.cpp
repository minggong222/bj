#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(int i = 0; i < babbling.size(); i++){
        int j;
        string b = "";
        for(j = 0; j < babbling[i].size();){
            if(babbling[i][j] == 'a'){
                if(j+2 < babbling[i].size() &&
                  babbling[i][j+1] == 'y' &&
                  babbling[i][j+2] == 'a' &&
                  b != "aya"){
                    j+=3;
                    b = "aya";
                }else
                    break;
            }else if(babbling[i][j] == 'y'){
                if(j+1 < babbling[i].size() &&
                  babbling[i][j+1] == 'e' &&
                  b != "ye"){
                    j+=2;
                    b = "ye";
                }else
                    break;
            }else if(babbling[i][j] == 'w'){
                if(j+2 < babbling[i].size() &&
                  babbling[i][j+1] == 'o' &&
                  babbling[i][j+2] == 'o' &&
                  b != "woo"){
                    j+=3;
                    b = "woo";
                }else
                    break;
            }else if(babbling[i][j] == 'm'){
                if(j+1 < babbling[i].size() &&
                  babbling[i][j+1] == 'a' &&
                  b != "ma"){
                    j+=2;
                    b = "ma";
                }else
                    break;
            }else   break;
        }
        if(j == babbling[i].size()) answer++;
    }
    return answer;
}