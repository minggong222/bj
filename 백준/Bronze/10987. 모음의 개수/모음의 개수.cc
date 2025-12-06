#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define ll long long
using namespace std;

int main() {
    string str;
    int answer = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            answer++;
    }
    cout << answer;
    return 0;
}