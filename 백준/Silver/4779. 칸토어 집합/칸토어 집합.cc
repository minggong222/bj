#include <iostream>
#include <cmath>
using namespace std;
void cantor(int i, int num)
{
    if ((i / num) % 3 == 1) {
        cout << ' ';
    }
    else
    {
        if (num / 3 == 0)
            cout << '-';
        else
            cantor(i, num / 3);
    }
}
int main() {
    int n, x;
    while (cin >> n) {
        x = pow(3, n);
        for (int i = 0; i < x; i++)
        {
            cantor(i, x);
        }
        cout << '\n';
    }
}