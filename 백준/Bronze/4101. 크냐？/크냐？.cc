#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int x, y;
    cin >> x >> y;
    while(1){
        if(x == 0 && y == 0)
            break;
        if(x > y)
            cout << "Yes\n";
        else
            cout << "No\n";
        cin >> x >> y;
    }
	return 0;
}