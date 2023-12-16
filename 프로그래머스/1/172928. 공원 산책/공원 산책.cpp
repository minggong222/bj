#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool obstacle(vector<string>& park, int go, vector<int>& answer, char op){
    for(int j = 1; j < go+1; j++){
        switch(op){
            case 'E':
                if(park[answer[0]].size() <= answer[1] + go)
                    return false;
                if(park[answer[0]][answer[1]+j] == 'X')
                    return false;
                break;
            case 'W':
                if(answer[1] - go < 0)
                    return false;
                if(park[answer[0]][answer[1]-j] == 'X')
                    return false;
                break;
            case 'N':
                if(answer[0] - go < 0)
                    return false;
                if(park[answer[0] - j][answer[1]] == 'X')
                    return false;
                break;
            case 'S':
                if(park.size() <= answer[0] + go ||park[answer[0] + j][answer[1]] == 'X')
                    return false;
                if(park[answer[0] + j][answer[1]] == 'X')
                    return false;
                break;
        }
    }
    return true;
}
vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    for(int i = 0; i < park.size(); i++){
        if(find(park[i].begin(), park[i].end(), 'S') != park[i].end()){
            answer.push_back(i);
            answer.push_back(find(park[i].begin(), park[i].end(), 'S') - park[i].begin());
            break;
        }
    }
    for(int i = 0; i < routes.size(); i++){
        int go  = routes[i][2] - 48;
        if(obstacle(park, go, answer, routes[i][0])){
            switch(routes[i][0]){
            case 'E':
                answer[1] += go;
                break;
            case 'W':
                answer[1] -= go;
                break;
            case 'N':
                answer[0] -= go;;
                break;
            case 'S':
                answer[0] += go;
                break;
            }
        }
        cout << answer[0] << answer[1] << endl;
    }
    return answer;
}