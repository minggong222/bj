#include <iostream>
#include <string>
#define ll long long
using namespace std;
string a, b, c;

bool asd(string str)
{
    return (str == "Fizz" || str == "Buzz" || str == "FizzBuzz");
}
void qwe(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
        cout << "FizzBuzz";
    else if (a % 3 == 0)
        cout << "Fizz";
    else if (a % 5 == 0)
        cout << "Buzz";
    else
        cout << a;
    return;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (!asd(a))
        qwe(stoi(a) + 3);
    else if (!asd(b))
        qwe(stoi(b) + 2);
    else
        qwe(stoi(c) + 1);
    return 0;
}