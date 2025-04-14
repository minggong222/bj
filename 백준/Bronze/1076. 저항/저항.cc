#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string str;
    ll ans = 0;
    cin >> str;
    switch (str[0])
    {
    case 'b':
        if (str[1] == 'r')
            ans += 10;
        else if(str[2] == 'u')
            ans += 60;
        break;
    case 'r':
        ans += 20;
        break;
    case 'o':
        ans += 30;
        break;
    case 'y':
        ans += 40;
        break;
    case 'g':
        if (str[3] == 'e')
            ans += 50;
        else
            ans += 80;
        break;
    case 'v':
        ans += 70;
        break;
    case 'w':
        ans += 90;
        break;
    }
    cin >> str;
    switch (str[0])
    {
    case 'b':
        if (str[1] == 'r')
            ans += 1;
        else if(str[2] == 'u')
            ans += 6;
        break;
    case 'r':
        ans += 2;
        break;
    case 'o':
        ans += 3;
        break;
    case 'y':
        ans += 4;
        break;
    case 'g':
        if (str[3] == 'e')
            ans += 5;
        else
            ans += 8;
        break;
    case 'v':
        ans += 7;
        break;
    case 'w':
        ans += 9;
        break;
    }
    cin >> str;
    switch (str[0])
    {
    case 'b':
        if (str[1] == 'r')
            ans *= 10;
        else if(str[2] == 'u')
            ans *= 1000000;
        break;
    case 'r':
        ans *= 100;
        break;
    case 'o':
        ans *= 1000;
        break;
    case 'y':
        ans *= 10000;
        break;
    case 'g':
        if (str[3] == 'e')
            ans *= 100000;
        else
            ans *= 100000000;
        break;
    case 'v':
        ans *= 10000000;
        break;
    case 'w':
        ans *= 1000000000;
        break;
    }
    cout << ans;
}