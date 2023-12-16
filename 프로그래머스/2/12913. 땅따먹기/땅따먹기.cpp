#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    for(int i = 0; i < land.size()-1; i++){
        for(int j = 0; j < 4; j++){
            int max = land[i+1][j];
            for(int k = 0; k < 4; k++){
                if(k != j){
                    if(max < land[i+1][j]+land[i][k])
                        max = land[i+1][j]+land[i][k];
                }
            }
            land[i+1][j] = max;
        }
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    answer = *max_element(land[land.size()-1].begin(), land[land.size()-1].end());
    return answer;
}