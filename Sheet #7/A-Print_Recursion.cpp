#include <iostream>
using namespace std;

void recursion(int n){
    if(n < 1)
        return;
    else{
        cout << "I love Recursion"<< endl;
        recursion(n - 1);
    }
}

int main(){
    int n;
    cin >> n;
    recursion(n);
    return 0;
}