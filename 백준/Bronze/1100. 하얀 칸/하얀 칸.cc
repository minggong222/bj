#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> str;
    int answer = 0;
    for(int i = 0; i < 10; i++){
        string s;
        cin >> s;
        str.push_back(s);
    }
    for(int i = 0; i < 10; i++){
        for(int j = i%2; j < 10; j+=2){
            if(str[i][j] == 'F')
                answer++;
        }
    }
    cout << answer;
    return 0;
}