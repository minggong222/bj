#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(isupper(str[i]))
            str[i] += 'a' - 'A';
        else
            str[i] += 'A' - 'a';
    }
    cout << str;
    return 0;
}