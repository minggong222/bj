#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N,cnt = 0;
    cin >> N;
    int a = 0;
    while (cnt != N) {
        a++;
        int temp = a;
        while (temp != 0) {
            if (temp % 1000 == 666) {
                cnt++;
                break;
            }
            else
            {
                temp = temp / 10;
            }
        }
    }
    cout << a;
    return 0;
}
