#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
int n;
int answer = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    n = 1000 - n;
    answer += n / 500;
    n %= 500;
    answer += n / 100;
    n %= 100;
    answer += n / 50;
    n %= 50;
    answer += n / 10;
    n %= 10;
    answer += n / 5;
    n %= 5;
    answer += n / 1;
    cout << answer;
    return 0;
}