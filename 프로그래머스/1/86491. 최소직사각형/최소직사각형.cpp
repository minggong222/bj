#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(vector<int> a, vector<int> b){
    if(a[0] == b[0])
        return(a[1] > b[1]);
    return(a[0] > b[0]);
}
bool cmp2(vector<int> a, vector<int> b){
    if(a[1] == b[1])
        return(a[0] > b[0]);
    return(a[1] > b[1]);
}

int solution(vector<vector<int>> sizes) {
    int a = 0;
    for(int i = 0; i < sizes.size(); i++)
    {
        a = sizes[i][0];
        if(sizes[i][0] < sizes[i][1])
        {
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = a;
        }
    }
    sort(sizes.begin(),sizes.end(),cmp);
    a = sizes[0][0];
    sort(sizes.begin(),sizes.end(),cmp2);
    return a * sizes[0][1];
}