#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer, width, length;
    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[i].size(); j++){
            if(wallpaper[i].find('#') == -1)
                break;
            else
                length.push_back(i);
            if(wallpaper[i][j] == '#')
                width.push_back(j);
        }
    }
    sort(width.begin(), width.end());
    answer.push_back(length[0]);
    answer.push_back(width[0]);
    answer.push_back(length[length.size()-1]+1);
    answer.push_back(width[width.size()-1]+1);
    return answer;
}