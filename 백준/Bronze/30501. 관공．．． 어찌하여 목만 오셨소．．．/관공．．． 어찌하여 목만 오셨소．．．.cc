#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for(int j = 0; j <str.size(); j++){
            if(str[j] == 'S'){
                cout << str;
                break;
            }
        }
    }
    return 0;
}