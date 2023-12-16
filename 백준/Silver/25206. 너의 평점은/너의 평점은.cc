#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int main() {
    double sum = 0, sum2 = 0;
    for (int i = 0; i < 20; i++) {
        string input;
        getline(cin, input);
        vector<string> answer;
        stringstream ss(input);
        string temp;
        while (getline(ss, temp, ' ')) {
            answer.push_back(temp);
        }
        sum += answer[1][0] - 48;
        switch (answer[2][0])
        {
        case'A':
            if (answer[2][1] == '0')    sum2 += (4.0 * (answer[1][0] - 48));
            else sum2 += (4.5 * (answer[1][0] - 48));
            break;
        case 'B':
            if (answer[2][1] == '0')    sum2 += (3.0 * (answer[1][0] - 48));
            else sum2 += (3.5 * (answer[1][0] - 48));
            break;
        case'C':
            if (answer[2][1] == '0')    sum2 += (2.0 * (answer[1][0] - 48));
            else sum2 += (2.5 * (answer[1][0] - 48));
            break;
        case'D':
            if (answer[2][1] == '0')    sum2 += (1.0 * (answer[1][0] - 48));
            else sum2 += (1.5 * (answer[1][0] - 48));
            break;
        case'P':
            sum -= answer[1][0] - 48;
            break;
        }
    }
    cout << sum2 / sum;
	return 0;
}