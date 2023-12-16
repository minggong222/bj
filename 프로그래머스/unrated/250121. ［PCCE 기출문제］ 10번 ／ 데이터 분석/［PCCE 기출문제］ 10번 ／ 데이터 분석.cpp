#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp1(vector<int> a, vector<int> b){
    return a[0] < b[0];
}
bool cmp2(vector<int> a, vector<int> b){
    return a[1] < b[1];
}
bool cmp3(vector<int> a, vector<int> b){
    return a[2] < b[2];
}
bool cmp4(vector<int> a, vector<int> b){
    return a[3] < b[3];
}
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    for(int i = 0; i < data.size(); i++){
        switch(ext[0]){
            case 'c':
                if(data[i][0] < val_ext)
                    answer.push_back(data[i]);
                break;
            case 'd':
                if(data[i][1] < val_ext)
                    answer.push_back(data[i]);
                break;
            case 'm':
                if(data[i][2] < val_ext)
                    answer.push_back(data[i]);
                break;
            case 'r':
                if(data[i][3] < val_ext)
                    answer.push_back(data[i]);
                break;
        }
    }
    switch(sort_by[0]){   
        case 'c':
            sort(answer.begin(), answer.end(), cmp1);
            break;
        case 'd':
            sort(answer.begin(), answer.end(), cmp2);
            break;
        case 'm':
            sort(answer.begin(), answer.end(), cmp3);
            break;
        case 'r':
            sort(answer.begin(), answer.end(), cmp4);
            break;
    }
    return answer;
}