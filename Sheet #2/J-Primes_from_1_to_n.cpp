#include <iostream>
using namespace std;
 
bool isPrime(int n){
    if(n == 1|| n == 0) 
        return false;
    for(int i = 2 ; i <= n / 2 ; i++) { 
        if(n % i == 0) 
            return false;
    }
    return true;
}
 
int main() {
    int n;
    bool state;
    cin >> n;
 
    for(int i = 1 ; i <= n ; i++){
        state = isPrime(i);
        if(state){
            cout << i << " ";
        }
    }
    return 0;
}