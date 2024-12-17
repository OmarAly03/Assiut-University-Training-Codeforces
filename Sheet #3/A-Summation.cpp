#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    long long int sum = 0;
    cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];

    for(int i = 0 ; i < n ; i++)
        sum += arr[i];

    cout << abs(sum);
    return 0;
}