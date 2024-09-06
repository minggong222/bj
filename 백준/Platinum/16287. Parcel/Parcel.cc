#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int w, n;
int arr[5000];
bool weight[800000];

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> w >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum > w)
                continue;
            if(weight[w-sum]){
                cout << "YES";
                return 0;
            }
        }
        for(int j = 0; j < i; j++){
            if(arr[i] + arr[j] < w)
                weight[arr[i] + arr[j]] = true;
        }
    }
    cout << "NO";
    return 0;
}