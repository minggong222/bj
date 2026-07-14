#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int a = 0, b = 0;
    for(int i = 0; i < sizes.size(); i++){
        if(sizes[i][0] < sizes[i][1])   swap(sizes[i][0], sizes[i][1]);
        a = max(sizes[i][0], a);
        b = max(sizes[i][1], b);
    }
    return a*b;
}