#include <iostream>
using namespace std;

void print_num(int n){
    if(n == 1){
        cout << 1;
    } else {
        print_num(n - 1);
        cout << endl << n;
    }
}

int main(){
    int n;
    cin >> n;
    print_num(n);
    return 0;
}