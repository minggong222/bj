#include <iostream>
#include <map>
#define ll long long
using namespace std;
map<char, int> m;
string str;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    char sw;
    cin >> str;
    sw = str[0];
    m[str[0]]++;
    for(int i = 1; i< str.size();i++){
        if(str[i] != sw){
            m[str[i]]++;
            sw = str[i];
        }
    }
    cout << min(m['0'], m['1']);
    return 0;
}