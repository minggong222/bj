#include<iostream>
#include<queue>
#include<vector>
using namespace std;
bool arr[10001];
int f(int a) {
    int b = 10000;
    int c = a;
    while (b) {
        c += a / b;
        a %= b;
        b /= 10;
    }
    return c;
}

int main() {
    for (int i = 1; i <= 10000; i++) {
        if (arr[i])  continue;
        int a = f(i);

        while (a < 10000) {
            arr[a] = true;
            a = f(a);
        }
    }
    for (int i = 1; i < 10000; i++) {
        if (arr[i])  continue;
        cout << i << '\n';
    }
    return 0;
}