#include <iostream>
using namespace std;
 
int main() {
    int numbers, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> numbers;
 
    int arr[numbers];
 
    for(int i = 0 ; i < numbers ; i++) 
        cin >> arr[i];
    
    for(int i = 0 ; i < numbers ; i++){
        if(arr[i] % 2 == 0)
            even++;
        else 
            odd++;
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }
    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << positive << endl << "Negative: " << negative;
    return 0;
}