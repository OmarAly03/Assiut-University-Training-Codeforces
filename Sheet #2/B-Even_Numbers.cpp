#include <iostream>
using namespace std;
 
int main() {
    int x, check = 0;
    cin >> x;
    for(int i = 1 ; i <= x ; i++) 
        if(i % 2 == 0){
            cout << i << endl;
            check = 1;
        }
    if(!check) cout << -1;
    return 0;
}