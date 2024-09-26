#include <iostream>
#define ll long long
using namespace std;
int arr[26];
string str;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        arr[str[i]-'a']++;
    }
    for(int i = 0; i < 26; i++)
        cout << arr[i] << ' ';
    return 0;
}