#include <string>
#include <vector>
#include <bitset>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < arr1.size(); i++){
        string s1 = "", s2 = "", str = "";
        for(int j = 0; j < n; j++){
            s1 = to_string(arr1[i]%2) + s1;
            s2 = to_string(arr2[i]%2) + s2;
            arr1[i] /= 2;
            arr2[i] /= 2;
        }
        for(int j = 0; j < n; j++){
            if(s1[j] == '1' || s2[j] == '1'){
                str += "#";
            }else{
                str += " ";
            }
        }
        answer.push_back(str);
        
    }
    return answer;
}