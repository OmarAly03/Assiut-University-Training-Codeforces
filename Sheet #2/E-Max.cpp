#include <iostream>
using namespace std;
 
int main() {
    int numbers, max;
    cin >> numbers;
 
    int arr[numbers];
    for(int i = 0 ; i < numbers ; i++)
        cin >> arr[i];
    
    max = arr[0];
    for(int i = 1 ; i < numbers ; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    cout << max;
    return 0;
}