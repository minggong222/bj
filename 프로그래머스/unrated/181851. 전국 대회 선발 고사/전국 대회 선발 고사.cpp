#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<int> v;
    for(int i = 0; i < rank.size(); i++){
        if(!attendance[i])
            rank[i] = 101;
    }
    int idx = min_element(rank.begin(),rank.end()) - rank.begin();
    answer = answer + 10000 * idx;
    rank[idx] = 101;
    idx = min_element(rank.begin(),rank.end()) - rank.begin();
    answer = answer + 100 * idx;
    rank[idx] = 101;
    idx = min_element(rank.begin(),rank.end()) - rank.begin();
    answer = answer + idx;
    rank[idx] = 101;
    return answer;
}