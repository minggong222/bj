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
        if(str.size() >= 6 && str.size() <=9)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}