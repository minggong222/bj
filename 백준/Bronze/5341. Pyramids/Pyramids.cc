#include <iostream>
#include <string>
using namespace std;
int main()
{
    while (1)
    {
        int a;
        cin >> a;
        if (a == 0)
            break;
        cout << (a * (a + 1)) / 2 << '\n';
    }
}
