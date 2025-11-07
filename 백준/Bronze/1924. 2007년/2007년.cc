#include <iostream>

using namespace std;

int main() {
	int a, b;
	int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> a >> b;
    int sum = b;
    for(int i = 1; i < a; i++){
        sum += arr[i];
    }
    string s[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    cout << s[sum%7];
	return 0;
}