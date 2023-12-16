#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> a;
    map<int, string> b;
    for(int i = 0; i < players.size(); i++){
        b[i] = players[i];
        a[players[i]] = i;
    }
    for(int i = 0; i < callings.size(); i++){
        int z = a[callings[i]];
        string temp = b[z];
        b[z] = b[z - 1];
        b[z - 1] = temp;
        a[b[z]]++;
        a[b[z - 1]]--;
    }
    for(int i = 0; i < b.size(); i++){
        answer.push_back(b[i]);
    }
    return answer;
}