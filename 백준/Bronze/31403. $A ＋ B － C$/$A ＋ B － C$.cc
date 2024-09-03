#include <iostream>
#include <string>
#define ll long long
using namespace std;
string a, b, c;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    cout << stoi(a) + stoi(b) - stoi(c) << '\n';
    cout << stoi(a+b) - stoi(c);
}