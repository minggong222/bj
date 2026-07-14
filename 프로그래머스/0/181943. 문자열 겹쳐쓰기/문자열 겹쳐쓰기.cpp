#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    int idx = s;
    for(int i = 0; i < overwrite_string.size(); i++){
        my_string[idx + i] = overwrite_string[i];
    }
    return my_string;
}