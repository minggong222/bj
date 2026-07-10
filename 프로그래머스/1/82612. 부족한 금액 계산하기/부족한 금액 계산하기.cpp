using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    while(count--){
        answer += price*(count+1);
    }
    return answer - money <= 0 ? 0 : answer - money;
}