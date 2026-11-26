#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <string>
#define ll long long
#define MAX 2147483647
using namespace std;
int n, m = 0;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    int arr[1001];
    for (int i = 1; i <= 99; i++)
    {
        arr[i] = i;
    }
    for (int i = 100; i < 1000; i++)
    {
        arr[i] = arr[i - 1];
        string str = to_string(i);
        if (str[0] + str[2] == str[1] * 2)
        {
            arr[i]++;
        }
    }
    arr[1000] = arr[999];
    cout << arr[n];
    return 0;
}