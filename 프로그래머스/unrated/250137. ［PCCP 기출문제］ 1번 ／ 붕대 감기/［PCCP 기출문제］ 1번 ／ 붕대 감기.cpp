#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health;
    health -= attacks[0][1];
    for(int i = 1; i < attacks.size(); i++){
        health += bandage[1]*(attacks[i][0] - attacks[i-1][0] - 1);
        health += bandage[2]*((attacks[i][0] - attacks[i-1][0] - 1)/bandage[0]);
        if(health > answer)
            health = answer;
        health -= attacks[i][1];
        if(health <= 0){
            health = -1;
            break;
        }
    }
    return health;
}