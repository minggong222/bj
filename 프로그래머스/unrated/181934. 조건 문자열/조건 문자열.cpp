#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    char e = eq[0];
    char i = ineq[0];
    switch(e){
        case '=':
            switch(i){
                case '<':
                    if(n <= m)
                        answer = 1;
                    break;
                case '>':
                    if(n >= m)
                        answer = 1;
                    break;
            }
            break;
        case '!':
            switch(i){
                case '<':
                    if(n < m)
                        answer = 1;
                    break;
                case '>':
                    if(n > m)
                        answer = 1;
                    break;
            }
            break;
    }
    return answer;
}