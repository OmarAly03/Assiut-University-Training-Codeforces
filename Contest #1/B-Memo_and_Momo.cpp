#include <iostream>
using namespace std;
 
int main() {
    unsigned long long a, b, k;
    cin >> a >> b >> k;
 
    if((a % k == 0)){
        if(b % k == 0) cout << "Both";
        else cout << "Memo";
    }
    else if(b % k == 0)
        cout << "Momo";
    else
        cout << "No One";
 
    return 0;
}