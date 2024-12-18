#include <iostream>
using namespace std;

void convert_to_binary(int n){
    if(n == 1)
        cout << 1;   
    else{
        convert_to_binary(n/2);
        cout << n % 2;
    }
}

int main(){
    int testcases;
    cin >> testcases;

    while(testcases--){
        int n;
        cin >> n;
        convert_to_binary(n);
        cout << endl;
    }

    return 0;
}